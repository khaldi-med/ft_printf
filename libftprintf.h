#ifndef LIBFTPRINTF_h
# define LIBFTPRINTF_h

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
char	*ft_str_to_hex(char *str, char type);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *str);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

#endif
