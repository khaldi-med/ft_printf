#include "libftprintf.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;
	char	*r;

	s = "hello";
	r = ft_str_to_hex(s, 'X');
	if (r)
	{
		printf("%s\n", r);
		free(r);
	}
	while (*s)
	{
		printf("%X", *s);
		s++;
	}
	return (0);
}
