/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:37:18 by nucardos          #+#    #+#             */
/*   Updated: 2023/07/11 16:37:20 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned long num)
{
	long	i;

	i = 0;
	while (num)
	{
		num /= 16;
		i++;
	}
	return (i);
}

void	print_hex(unsigned long int str)
{
	int	size;

	size = 0;
	if (str >= 16)
	{
		print_hex(str / 16);
		print_hex(str % 16);
	}
	else 
	{
		if (str < 10)
			ft_printchar(str + '0');
		else
			ft_printchar(str - 10 + 'a');
	}
}

int	ft_printptr(unsigned long int str)
{
	long int	size;

	if (str == 0)
	{
		write(1, "(nil)", 5);
		size = 5;
	}
	else
	{
		size = hex_len(str) + 2;
		write(1, "0x", 2);
		print_hex(str);
	}
	return (size);
}

/*int main()
{
	ft_printptr(0);
	printf("\n");
	ft_printptr(-2147483648);
	printf("\n");
	return 0;
}*/
