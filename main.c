#include "libftprintf.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int i;
	char	*r;

	i = 123456;
	r = ft_str_to_hex(ft_itoa(i), 'x');
	if (r)
	{
		printf("%s\n", r);
		free(r);
	}
	printf("%x", i);
	return (0);
}
