/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:27:25 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:27:26 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}

/*int main()
{
	char str[] = "Nuno Silva";
	int i = 0;

	printf("%s\n", strchr( str, i));
	printf("%s\n", ft_strchr( str, i));
}*/
