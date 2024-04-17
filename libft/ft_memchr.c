/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:24:41 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:24:43 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	char s[] = "Nuno Miguel";
	int c = 'o';
	size_t n = 12;
	printf("%p\n",memchr(s, c, n));
	printf("%p\n",ft_memchr(s, c, n));
}*/
