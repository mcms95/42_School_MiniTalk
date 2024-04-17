/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:37:29 by nucardos          #+#    #+#             */
/*   Updated: 2023/07/11 16:37:31 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len(unsigned int n)
{
	int	size;

	size = 0;
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(unsigned int n)
{
	char	*str;
	int		size;

	size = len(n);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (n > 0)
	{
		str[--size] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

int	ft_printunsigned(unsigned int num)
{
	char	*str;
	int		size;

	size = 0;
	if (num == 0)
		size += ft_printchar('0');
	else
	{
		str = ft_itoa(num);
		size += ft_printstr(str);
		free(str);
	}
	return (size);
}

/*int main()
{
	int  a  = printf("%u", -1);
	printf("\n");
	int  b  = ft_printunsigned(-1);
	printf("\na = %d, b = %d\n", a ,b);
}*/
