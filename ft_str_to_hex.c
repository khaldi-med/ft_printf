#include <stdlib.h>

char	*ft_str_to_hex(char *str, char type)
{
	int		i;
	int		j;
	char	*new_s;
	char	*lower;
	char	*upper;
	int		val;
	int		len;

	i = 0;
	j = 0;
	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	char *digits; // Will point to either lower or upper based on type
	if (type == 'x')
		digits = lower;
	else
		digits = upper;
	// Calculate length of str
	len = 0;
	while (str[len])
		len++;
	// Allocate memory: 2 hex digits per character + 1 for null terminator
	new_s = (char *)malloc((2 * len + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	while (str[i])
	{
		val = (unsigned char)str[i]; // Get ASCII value as an unsigned char
		// High nibble (first hex digit)
		new_s[j++] = digits[val / 16];
		// Low nibble (second hex digit)
		new_s[j++] = digits[val % 16];
		i++;
	}
	new_s[j] = '\0'; // Null terminate the new string
	return (new_s);
}
