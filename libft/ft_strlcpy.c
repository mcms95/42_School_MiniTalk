/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:28:27 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:28:29 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}

/*int main()
{
	char src[] = "Hello, world!";
	char dest[10];

	size_t length = strlcpy(dest, src, sizeof(dest));

	printf("Source Length: %zu\n", strlen(src));
	printf("Destination Length: %zu\n", length);
	printf("Destination String: %s\n", dest);

	return 0;
}*/
