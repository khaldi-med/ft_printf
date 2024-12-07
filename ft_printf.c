#include "libftprintf.h"

int	ft_case(const char *str, ...)
{
	va_list	arg;
	int		count;
	int		i;

	count = 0;
	va_start(arg, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			if (str[i + 1] == '%')
				ft_putchar_fd(str[i], 1);
			else if (str[i + 1] == 'c')
				ft_putchar_fd(va_arg(arg, char), 1);
			else if (str[i + 1] == 's')
				ft_putstr_fd(va_arg(arg, char *), 1);
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
				ft_putnbr_fd(va_arg(arg, int), 1);
		i++;
		count++;
	}
	va_end(arg);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int i = 0;
	va_start(arg, format);
	ft_case(format, va_start(arg, format));
	i = ft_case(format);
	va_end(arg);
	return i;
}
