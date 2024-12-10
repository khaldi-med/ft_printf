/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:13:45 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/10 08:09:36 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_h
# define FT_PRINTF_h

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
int		ft_printf(const char *, ...);
int		ft_putnbr_base(unsigned int n, int base, char *format);
int		ft_put_pointer(unsigned long n);
int		ft_putstr_fd(char *s, int fd);
char	*ft_itoa(int n);
// size_t	ft_strlen(const char *str);

#endif
