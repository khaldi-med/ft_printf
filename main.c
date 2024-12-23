#include "ft_printf.h"
#include <fcntl.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	int	fd;
	int	j;
	int	i;

	close(1);
	fd = open("text.txt", O_RDWR);
	j = 0;
	i = 0;
	j = printf("pointer\n") + 48;
	write(fd, &j, 1);
	write(fd, "\n", 1);
	i = ft_printf("pointer\n") + 48;
	write(fd, &i, 1);
	write(fd, "\n", 1);
	close(fd);
	return (0);
}
