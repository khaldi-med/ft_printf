#include "libftprintf.h"

char	*ft_str_to_hex(char *str, char type)
{
	int		i;
	char	*new_s;
	char	*lower;
	char	*upper;
	int		reminder;

	i = 0;
	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	reminder = 0;
	new_s = malloc(sizeof(char) * ft_strlen(str) + 1);
	if(!new_s)
		return NULL;
	while (str[i])
	{
		if (type == 'x')
		{
			reminder = str[i] % 16;
			new_s += lower[reminder];
		}
		else if (type == 'X')
		{
			reminder = str[i] % 16;
			new_s += upper[reminder];
		}
		i++;
	}
	return (new_s);
}
