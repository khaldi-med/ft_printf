/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:07:30 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/11 06:53:08 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	if (format == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	if (format == 'p')
		return (ft_put_pointer(va_arg(args, void *)));
	if (format == 'd' || format == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	if (format == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), 10, "0123456789"));
	if (format == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), 16,
				"0123456789abcdef"));
	if (format == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), 16,
				"0123456789ABCDEF"));
	if (format == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		neg;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			neg = ft_handle_format(*(++format), args);
			if (neg == -1)
				va_end(args);
			return (-1);
			neg += count;
		}
		else
		{
			if (ft_putchar_fd(*format, 1) == -1)
				va_end(args);
			return (-1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
