#include "libftprintf.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	i;

	i = 12345;
	printf("%s", ft_itoa(i));
	return (0);
}
