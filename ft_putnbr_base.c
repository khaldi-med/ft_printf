/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 05:22:13 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/24 00:27:34 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, int base, char *format)
{
	int		count;
	int		i;
	char	buffer[19];

	count = 0;
	i = 0;
	if (n == 0)
		return (ft_putchar_fd('0'));
	while (n)
	{
		buffer[i++] = format[n % base];
		n /= base;
	}
	while (i--)
	{
		ft_putchar_fd(buffer[i]);
		count++;
	}
	return (count);
}
