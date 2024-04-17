/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:36:58 by nucardos          #+#    #+#             */
/*   Updated: 2023/07/11 16:37:00 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int num, char flag)
{
	long	size;
	char	*lower;
	char	*upper;

	upper = "0123456789ABCDEF";
	lower = "0123456789abcdef";
	size = 0;
	if (num < 0)
	{
		ft_printhex(-num, flag);
	}
	if (num >= 16)
	{
		size += ft_printhex(num / 16, flag);
		size += ft_printhex(num % 16, flag);
	}
	else if (num < 16)
	{
		if (flag == 'x')
			size += write(1, &lower[num], 1);
		else
			size += write(1, &upper[num], 1);
	}
	return (size); 
}

/*int main()
{
	int a = ft_printhex(32, 'X');
	printf("\nNumber of char written: %d\n", a);
	return 0;
}*/
