/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:30:00 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:30:02 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates with malloc and returns a copy of ’s1’
// with the characters specified in ’set’
// removed from the beginning and the end of the string.
static int	check_char(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*new;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && check_char(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_char(set, s1[end - 1]))
		end--;
	new = (char *)malloc((end - start + 1) * sizeof(char ));
	if (!new)
		return (NULL);
	while (end > start)
	{
		new[i++] = s1[start++];
	}
	new[i] = '\0';
	return (new);
}

/*int main()
{
	const char *s1 = "-nuno-silva-";
	const char *set = "-";
	char *result = ft_strtrim(s1, set);
	printf("%s\n", result);
	free(result);
}*/
