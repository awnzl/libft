/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenzel <avenzel@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 21:17:37 by avenzel           #+#    #+#             */
/*   Updated: 2016/11/30 13:29:26 by avenzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		(*alst)->content = NULL;
		free(*alst);
	}
	*alst = NULL;
}
