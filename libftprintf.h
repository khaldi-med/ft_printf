#ifndef LIBFTPRINTF_h
#define LIBFTPRINTF_h

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *, ...);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);

#endif
