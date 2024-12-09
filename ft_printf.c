/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 01:59:33 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/09 22:43:28 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	puthex_fd(unsigned int num, int format, int *count)
{
	char	*str;

	str = NULL;
	if (format)
	{
		if (format == 'x')
			str = ft_str_to_hex((char *)&num, 'x');
		else
			str = ft_str_to_hex((char *)&num, 'X');
	}
	if (str)
	{
		ft_putstr_fd(str, 1);
		*count += ft_strlen(str);
		free(str);
	}
}

static void	ft_put_pointer_fd(void *ptr, int *count)
{
	unsigned long	address;
	char			*base;
	char			*str;

	address = (unsigned long)ptr;
	base = "0123456789abcdef";
	write(1, "0x", 2);
	if (address == 0)
		write(1, "0", 1);
	str = ft_str_to_hex((char *)&address, 'x');
	if (str)
	{
		ft_putstr_fd(str, 1);
		*count += ft_strlen(str);
		free(str);
	}
}
static void	ft_handle_format(const char format, va_list args, int *count)
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
	else if (format == 's'){
		str = va_arg(args, char *);
		if(!str)
			str = "(null)";
		*count += write(1, str, ft_strlen(str));	
	}
	else if(format == 'p')
		ft_put_pointer_fd(va_arg(args, void*), count);
	else if(format == 'd' || format == 'i')
		n = va_arg();
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
