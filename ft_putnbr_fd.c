/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:36:43 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/24 02:00:10 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count = +ft_putstr_fd("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		ft_putchar_fd('-');
		n *= -1;
	}
	if (n > 9)
		count += ft_putnbr_base(n, 10, "0123456789");
	return (count);
}
