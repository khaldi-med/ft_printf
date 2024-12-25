/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 05:22:13 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/25 22:42:36 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, int base, char *format)
{
	int		count;
	int		i;
	int		ret;
	char	buffer[19];

	count = 0;
	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n)
	{
		buffer[i++] = format[n % base];
		n /= base;
	}
	while (i--)
	{
		ret = ft_putchar(buffer[i]);
		if (ret == -1)
			return (-1);
		count++;
	}
	return (count);
}
