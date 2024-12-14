#include "ft_printf.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	i = ft_printf("%p\n", NULL);
	ft_printf("%d\n", i);
	j = printf("%p\n", NULL);
	printf("%d\n", j);
	return (0);
}
