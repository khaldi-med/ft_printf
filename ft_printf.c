/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:07:30 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/10 07:03:42 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_handle_format(char format, va_list args)
{
	char			c;
	char			*str;
	int				n;
	unsigned int	num;

	str = NULL;
	n = 0;
	num = 0;
	if (format == 'c')
	{
		c = (char)va_arg(args, int);
		*count += write(1, &c, 1);
	}
	else if (format == 's')
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(null)";
		*count += write(1, str, ft_strlen(str));
	}
	else if (format == 'p')
		ft_put_pointer_fd(va_arg(args, void *), count);
	else if (format == 'd' || format == 'i')
	{
		n = va_arg(args, int);
		str = ft_itoa(n);
		if (str)
			write(1, str, ft_strlen(str));
		*count += ft_strlen(str);
		free(str);
	}
	else if (format == 'u')
	{
		num = va_arg(args, unsigned int);
		str = ft_itoa(num);
		if (str)
			write(1, str, ft_strlen(str));
		*count += ft_strlen(str);
		free(str);
	}
	else if (format == 'x' || format == 'X')
		ft_puthex_fd(va_arg(args, unsigned int), format, count);
	else if (format == '%')
		*count += write(1, "%", 1);
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
			ft_handle_format(*format, args, &count);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
