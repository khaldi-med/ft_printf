#include "libftprintf.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	i;

	i = 0;
	i = ft_printf("%d\n", 1234564);
	printf("%d", i);
	return (0);
}
