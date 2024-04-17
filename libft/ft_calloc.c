/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:22:40 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:22:42 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*int main()
{
	size_t i = 0;
	size_t nmemb = 5;
	size_t size = sizeof(int);

	int* array = ft_calloc(nmemb, size);
	if (array != NULL)
	{
		while (i < nmemb)
		{
			printf("%d", array[i]);
			i++;
		}
		printf("\n");
		free(array);
		
	}
	else
	{
		printf("Fail");
	}
	return 0;
}*/
