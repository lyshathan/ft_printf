/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ly-sha <ly-sha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:02:25 by lthan             #+#    #+#             */
/*   Updated: 2024/11/15 12:03:36 by ly-sha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_format(char c)
{
	if (c == 'c' || c == 's' || c == 's' || c == 'p'
		||c == 'd' ||c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

void	special_print(char c, va_list args, int *count)
{
	if (c == 'c')
		print_char(va_arg(args, int), count);
	if (c == 's')
		print_str(va_arg(args, char *), count);
	if (c == 'p')
		print_ptr(va_arg(args, void *), count);
	if (c == 'i' || c == 'd')
		print_nbr(va_arg(args, int), count);
	if (c == 'u')
		print_unsigned_nbr(va_arg(args, unsigned int), count);
	if (c == 'x' || c == 'X')
		print_hexa(va_arg(args, int), count, c);
	if (c == '%')
	{
		write(1, "%", 1);
		*count += 1;
	}
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		count;
	va_list	args;

	if (!format)
		return (0);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] && is_format(format[i + 1]))
		{
			special_print(format[i + 1], args, &count);
			i += 2;
		}
		if (format[i] == '%')
			i++;
		if (format[i])
		{
			ft_putchar_fd(format[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int *ptr;
	//ptr = NULL;
	int	nbr = -4242;

	printf("\nCOUNT = %d\n",
	ft_printf("TEXT\n%c\n%s\n%p\nHello!\n%d\n%i\n%u\n%x\n%%bye.",
	'A',
	"Bonjour",
	ptr,
	nbr,
	nbr,
	nbr,
	nbr));

	printf("\n=====================\n");

	printf("\nCOUNT = %d\n",
	printf("TEXT\n%c\n%s\n%p\nHello!\n%d\n%i\n%u\n%x\n%%bye.",
	'A',
	"Bonjour",
	ptr,
	nbr,
	nbr,
	nbr,
	nbr));
	return (0);
}
