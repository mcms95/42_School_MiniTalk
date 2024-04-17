/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:22:28 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:22:30 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = '\0';
		i++;
	}
}

/*int main()
{
	char s[] = "Nuno";
	size_t n = 3;
	ft_bzero(s, n);

	for (size_t i = 0; i < sizeof(s); i++) {
		printf("%c", s[i]);
	}
	printf("\n");

	return 0;
}*/
