/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:51:05 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/14 00:48:47 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(unsigned long n)
{
	int	count;

	count = ft_putstr_fd("0x", 1);
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		count++;
	}
	else
	{
		count += ft_putnbr_base(n, 16, "0123456789abcdef");
	}
	return (count);
}
