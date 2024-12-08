/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 01:59:33 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/08 22:54:53 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_case(const char *str, ...)
{
	int		count;
	int		i;
	va_list	arg;

	count = 0;
	va_start(arg, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				ft_putchar_fd(str[i], 1);
			else if (str[i + 1] == 'c')
				ft_putchar_fd(va_arg(arg, int), 1);
			else if (str[i + 1] == 's')
				ft_putstr_fd(va_arg(arg, char *), 1);
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
				ft_putnbr_fd(va_arg(arg, int), 1);
			else if (str[i + 1] == 'x' || str[i + 1] == 'X')
				ft_str_to_hex(va_arg(arg, char *), 1);
			else if (str[i + 1] == 'p')
				ft_putstr_fd(va_arg(arg, char *), 1);
			else if (str[i + 1] == 'u')
				ft_putnbr_fd(va_arg(arg, unsigned int), 1);
		}
		i++;
		count++;
	}
	va_end(arg);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;

	i = 0;
	va_start(arg, format);
	i = ft_case(format, arg);
	va_end(arg);
	return (i);
}
