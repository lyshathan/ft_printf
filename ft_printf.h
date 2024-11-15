/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ly-sha <ly-sha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:54:22 by ly-sha            #+#    #+#             */
/*   Updated: 2024/11/15 11:40:40 by ly-sha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./../libft/libft.h"
# include <stdarg.h>

void	print_char(char c, int *count);
void	print_str(char *str, int *count);
void	print_ptr(void *ptr, int *count);
void	print_nbr(int nbr, int *count);
void	print_unsigned_nbr(unsigned int nbr, int *count);
void	print_hexa(int nbr, int *count, char c);

#endif
