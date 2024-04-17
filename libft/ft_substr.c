/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:29:31 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:29:33 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates with malloc and returns a substring from the string ’s’.
//The substring begins at index ’start’ and is of maximum size ’len’.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	sub_len;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	if (s_len - start < len)
		sub_len = s_len - start;
	else
		sub_len = len;
	str = (char *)malloc((sub_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[sub_len] = '\0';
	return (str);
}

/*int main()
{
	char s[] = "Nuno Silva";
	int start = 7;
	size_t len = 4;
	printf("%s\n", ft_substr(s, start, len));
}*/
