/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:36:44 by nucardos          #+#    #+#             */
/*   Updated: 2023/07/11 16:36:48 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_flag(const char flag, va_list args)
{
	int	size;

	size = 0;
	if (flag == 'c')
		size += ft_printchar(va_arg(args, int));
	if (flag == 's')
		size += ft_printstr(va_arg(args, char *));
	if (flag == 'x' || flag == 'X')
		size += ft_printhex(va_arg(args, int), flag);
	if (flag == 'p')
		size += ft_printptr(va_arg(args, unsigned long));
	if (flag == 'i' || flag == 'd')
		size += ft_printnum(va_arg(args, int));
	if (flag == 'u')
		size += ft_printunsigned(va_arg(args, int));
	if (flag == '%')
		size += ft_printchar('%');
	return (size);
}

int	ft_printf(const char *str, ...)
{
	int		size;
	int		i;
	va_list	args;

	va_start (args, str);
	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			size += ft_check_flag(str[i + 1], args);
			i++;
		}
		else
			size += ft_printchar(str[i]);
		i++;
	}
	va_end (args);
	return (size);
}

/*int main()
{
	int n = 42;
	char *str = "Hello, world!";
	unsigned long ptr = -2147483648;
	unsigned long ptr1 = 0;

	// Test cases
	ft_printf("Printing a character: %c\n", '0' + 2);
	ft_printf("Printing a character: %c %c\n", 'A', 'a');
	ft_printf("Printing a character: %c %c %c\n", '0', ' ', ' ');
	ft_printf("Printing a character: %c %c %c\n", '0', 0, '1');
	ft_printf("Printing a string: %s\n", str);
	ft_printf("Printing a hexadecimal number: %x\n", n);
	ft_printf("Printing a signed decimal number: %d\n", n);
	ft_printf("Printing an unsigned decimal number: %u\n", n);
	ft_printf("Printing a percent sign: %%\n");
	ft_printf("Printing a pointer: %p\n", ptr);
	ft_printf("Printing a pointer: %p\n", ptr1);
	return 0;
}*/
