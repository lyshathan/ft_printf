/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ly-sha <ly-sha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:55:55 by ly-sha            #+#    #+#             */
/*   Updated: 2024/11/15 11:39:18 by ly-sha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa_ptr(size_t address, int *count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (address >= 16)
		print_hexa_ptr((address / 16), count);
	ft_putchar_fd(hexa[address % 16], 1);
	*count += 1;
}

void	print_ptr(void *ptr, int *count)
{
	size_t	address;

	address = (size_t)ptr;
	if (address == 0)
	{
		write (1, "0x0", 3);
		*count += 3;
		return ;
	}
	write (1, "0x", 2);
	*count += 2;
	print_hexa_ptr(address, count);
	return ;
}
