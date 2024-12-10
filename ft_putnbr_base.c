/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 05:22:13 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/10 08:10:07 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int n, int base, char *format)
{
	int		count;
	int		i;
	char	buffer[20];

	count = 0;
	i = 0;
	if (n == 0)
		count += write(1, "0", 1);
	while (n)
	{
		buffer[i++] = format[n % base];
		n /= base;
	}
	buffer[i] = '\0';
	i = 0;
	while (buffer[i] != '\0')
		count += write(1, &buffer[i++], 1);
	return (count);
}
