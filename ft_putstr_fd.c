/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:22:15 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/24 02:10:38 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s)
{
	int count = 0;
	if (!s)
		s = "(null)";
	while (s[count])
	{
		ft_putchar_fd(s[count]);
		count++;
	}
	return count;
}
