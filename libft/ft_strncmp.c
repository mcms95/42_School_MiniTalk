/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:29:17 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:29:18 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	result;

	result = 0;
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		result = (unsigned char)(s1[i]) - (unsigned char)(s2[i]);
		if (result != 0)
			return (result);
		i++;
	}
	if (i < n)
		result = (unsigned char)(s1[i]) - (unsigned char)(s2[i]);
	return (result);
}

/*int main()
{
	char s1[] = "test/200";
	char s2[] = "test/0";
	size_t n = 6;

	int comparison = ft_strncmp(s1 ,s2 ,n);
	printf("%d\n", comparison);
}*/
