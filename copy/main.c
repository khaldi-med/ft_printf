#include "ft_printf.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	ft_printf("%p", NULL);
	printf("%p", NULL);
	return (0);
}
