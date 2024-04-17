/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:26:39 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:27:08 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	i = 0;
	return (count);
}

static char	**allocate_main_array(char const *s, char c)
{
	int		count;
	char	**array;

	count = count_word(s, c);
	array = (char **)malloc((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (array);
}

static int	word_size(char const *s, char c, int i)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	process_substring(char **array, char const *s,
	int lenght, int index)
{
	array[index] = (char *)malloc((lenght + 1) * sizeof(char));
	if (!array[index])
	{
		while (index >= 0)
			free(array[--index]);
		free(array);
		return ;
	}
	ft_memcpy(array[index], s, lenght);
	array[index][lenght] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		index;
	int		lenght;
	char	**array;

	i = 0;
	index = 0;
	array = allocate_main_array(s, c);
	if (!array)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		lenght = 0;
		if (s[i] != c && s[i] != '\0')
		{
			lenght = word_size(s, c, i) - i;
			process_substring(array, (const char *)(s + i), lenght, index);
			index++;
		}
		i += lenght;
	}
	array[index] = NULL;
	return (array);
}

/*int main()
{
	char s[] = "      split       this for   me  !       ";
	char c = ' ';
	char **result = ft_split(s, c);
	if (result)
	{
		int i = 0;
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return 0;
}
*/