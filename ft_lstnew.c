/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenzel <avenzel@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:37:09 by avenzel           #+#    #+#             */
/*   Updated: 2016/11/30 13:28:34 by avenzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*fresh;

	if ((fresh = (t_list*)malloc(sizeof(t_list))) == 0)
		return (NULL);
	if (content)
	{
		if ((fresh->content = ft_memalloc(content_size)) == 0)
			return (NULL);
		ft_memcpy(fresh->content, (void*)content, content_size);
		fresh->content_size = content_size;
		fresh->next = NULL;
	}
	else
	{
		fresh->content = NULL;
		fresh->content_size = 0;
		fresh->next = NULL;
	}
	return (fresh);
}
