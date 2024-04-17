/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:28:08 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:28:10 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates with malloc and returns a new string
//which is the result of the concatenation of ’s1’ and ’s2’.

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	total;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	total = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((total + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

/*int main()
{
	char s1[] = "Nuno ";
	char s2[] = "Silva";
	printf("%s\n", ft_strjoin(s1,s2));
}*/
