/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:24:28 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:24:31 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates with malloc
// returns a string representing the integer received as an argument. 
// Negative numbers must be handled.

static	int	len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/// passar n para long
char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nmb;

	nmb = n;
	i = len(nmb);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nmb == 0)
		str[0] = '0';
	else if (nmb < 0)
	{
		str[0] = '-';
		nmb = -nmb;
	}
	str[i] = '\0';
	while (nmb > 0)
	{
		str[--i] = nmb % 10 + '0';
		nmb /= 10;
	}
	return (str);
}

/*int main()
{
	int n = -422342;
	printf("%s\n", ft_itoa(n));
}*/
