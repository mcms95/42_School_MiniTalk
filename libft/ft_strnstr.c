/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:34:24 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:34:27 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*hay;

	hay = (char *)haystack;
	if (needle[0] == '\0')
		return (hay);
	if (hay[0] == '\0')
		return (NULL);
	i = 0;
	while (i < n)
	{
		j = 0;
		k = i;
		while (hay[k] == needle[j] && k < n)
		{
			k++;
			j++;
			if (needle[j] == '\0')
				return (hay + i);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	const char s1[] = " ";
	const char s2[] = "";
	size_t n = 0;
	printf("%s\n", ft_strnstr("abcdefgh", "abc", 2));
	return 0;
}*/