/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 01:52:45 by mohkhald          #+#    #+#             */
/*   Updated: 2024/12/09 22:26:21 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_str_to_hex(char *str, char type)
{
	if(!str)
		return NULL;
	size_t	i;
	char	*new_s;
	char	*lower;
	char	*upper;
	size_t	j;
	size_t	val;
	size_t	len;
	char	*digit;

	len = ft_strlen(str);
	i = 0;
	j = 0;
	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	new_s = malloc(sizeof(char) * len * 2 + 1);
	if (!new_s)
		return (NULL);
	if (type == 'X')
		digit = upper;
	else
		digit = lower;
	while (str[i])
	{
		val = (unsigned char)str[i];
		new_s[j++] = digit[val / 16];
		new_s[j++] = digit[val % 16];
		i++;
	}
	new_s[j] = '\0';
	return (new_s);
}
