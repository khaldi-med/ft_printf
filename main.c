#include "ft_printf.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	ft_printf("%p %p\n", 0, 0);
	printf("%p %p\n", (void*)0, (void*)0);
	ft_printf("%p %p\n", (void*)0, (void*)0);
	//ft_printf("%p", NULL);
	//printf("%p", NULL);
	return (0);
}
