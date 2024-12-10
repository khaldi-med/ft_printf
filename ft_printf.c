/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:07:30 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/10 08:09:21 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += write(1, (char)va_arg(args, int), 1);
	if (format == 's')
		count += ft_putstr_fd(va_arg(args, char *), 1);
	if (format == 'p')
		return (ft_put_pointer(va_arg(args, unsigned long)));
	if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (format == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), 10, "0123456789"));
	if (format == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), 16, "0123456789abcdef");
	if (format == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), 16, "0123456789ABCDEF");
	if (format == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			ft_handle_format(*format, args);
		}
		else
			count += write(1, &*format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
