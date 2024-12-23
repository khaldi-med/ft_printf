/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:13:45 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/24 00:28:49 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr_fd(int n);
int	ft_putchar_fd(char c);
int	ft_printf(const char *format, ...);
int	ft_putnbr_base(unsigned long n, int base, char *format);
int	ft_put_pointer(unsigned long n);
int	ft_putstr_fd(char *s);

#endif
