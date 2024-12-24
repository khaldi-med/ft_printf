/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:22:15 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/24 01:33:49 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s)
{
	if (!s)
		s = "(null)";
	while (*s)
	{
		ft_putchar_fd(*s);
		s++;
	}
}
