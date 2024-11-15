/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ly-sha <ly-sha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:13:33 by ly-sha            #+#    #+#             */
/*   Updated: 2024/11/15 11:28:28 by ly-sha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa(int nbr, int *count, char c)
{
	char	*hexa;

	if (c == 'x')
		hexa = "0123456789abcdef";
	if (c == 'X')
		hexa = "0123456789abcdef";
	if ((unsigned int)nbr >= 16)
		print_hexa(((unsigned int)nbr / 16), count, c);
	ft_putchar_fd((hexa[(unsigned int)nbr % 16]), 1);
	*count += 1;
}
