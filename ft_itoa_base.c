/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenzel <avenzel@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 20:07:16 by avenzel           #+#    #+#             */
/*   Updated: 2017/12/04 20:11:09 by avenzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa_base(int value, int base)
{
	char    *s;
	char    *hex;
	int     i;
	int     n;

	hex = "0123456789ABCDEF";
	n = value;
	i = 1;
	while (n /= base)
		i++;
	if (value < 0 && base == 10)
		i++;
	if (!(s = (char*)malloc(sizeof(char) * ((value == 0) ? 0 : i) + 1)))
		return (NULL);
	s[(value == 0) ? 0 : i] = 0;
	if (value < 0 && base == 10)
		s[0] = '-';
	while (value)
	{
		s[--i] = hex[value < 0 ? -(value % base) : value % base];
		value /= base;
	}
	return (s);
}
