/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthan <lthan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:02:25 by lthan             #+#    #+#             */
/*   Updated: 2024/11/14 17:14:15 by lthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_format(char c)

int	ft_printf(const char *format, ...)
{
	size_t	i;
	while (format[i])
	{
		if (format[i] == '%' && is_format(format[i + 1]) == 1)
			special_print(format[i + 1]);
		else
			ft_putchar(format[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_printf("Hello, World!\n");
	return (0);
}