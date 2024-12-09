/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:51:05 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/11 06:50:30 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(void *ptr)
{
	int				count;
	int				neg;
	unsigned long	n;

	n = (unsigned long)ptr;
	count = ft_putstr_fd("0x", 1);
	if (count == -1)
		return (-1);
	if (n == 0)
	{
		if (ft_putchar_fd('0', 1) == -1)
			return (-1);
		count++;
	}
	else
	{
		neg = ft_putnbr_base(n, 16, "0123456789abcdef");
		if (neg == -1)
			return (-1);
		count += neg;
	}
	return (count);
}
