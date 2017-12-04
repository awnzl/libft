/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenzel <avenzel@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 21:02:27 by avenzel           #+#    #+#             */
/*   Updated: 2017/12/04 19:58:42 by avenzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		val;

	val = n;
	i = 0;
	while (val /= 10)
		i++;
	if (n < 0)
		i++;
	if ((s = (char*)malloc(sizeof(char) * i + 2)) == 0)
		return (NULL);
	if (n < 0)
		s[0] = '-';
	s[i + 1] = '\0';
	if (n == 0)
		s[i--] = '0';
	while (n)
	{
		s[i--] = (n < 0) ? (-(n % 10)) + 48 : (n % 10) + 48;
		n /= 10;
	}
	return (s);
}
