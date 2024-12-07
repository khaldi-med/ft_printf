#ifndef LIBFTPRINTF_h
#define LIBFTPRINTF_h

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_printf(const char *, ...);
char *ft_str_to_hex(char *str, char type);
size_t  ft_strlen(const char *str)
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);

#endif
