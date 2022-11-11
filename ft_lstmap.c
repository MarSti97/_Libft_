/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:44:47 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/11 17:50:36 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* t_list	*ft_lstmap(t_list *lst, void *(*f)(void), void (*del)(void *))
{
	t_list *new;
	t_list *temp;
	
	temp = (f(lst->content));
	while (lst != NULL)
	{
		if (!lst)
		{
		(del)(lst->content);
		free (lst);
		}	
	}
	new = temp;
	return (new);
} */