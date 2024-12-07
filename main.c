#include "libftprintf.h"
#include <stdio.h>
#include <string.h>

char	ft_str_to_hex(char *str, char type);

int	main(void)
{
	char	*s;

	s = "hello world";

	printf("%x\n", ft_str_to_hex(s, 'x'));
	printf("%x\n", atoi(s));
	return (0);
}
