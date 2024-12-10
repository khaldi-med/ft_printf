/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:51:05 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/10 06:56:40 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(unsigned long n)
{
	int	count;

	count = 0;
	ft_putstr_fd("0x", 1);
	if (n == 0)
		count += write(1, "0", 1);
	else
		count += ft_printnbr_base(n, 16, "0123456789abcdef");
	return (count);
}
