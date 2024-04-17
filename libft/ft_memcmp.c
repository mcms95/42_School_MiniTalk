/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:34:49 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:34:51 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		result;

	result = 0;
	i = 0;
	while (i < n)
	{
		result = *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i);
		if (result != 0)
		{
			return (result);
		}
		i++;
	}
	return (result);
}

/*int main()
{
	char s1[] = "Nuno";
	char s2[] = "Jno";
	size_t n = 3;
	printf("%d\n", memcmp(s1, s2, n));
	printf("%d\n", ft_memcmp(s1, s2, n));
}*/
