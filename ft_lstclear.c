/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:25:47 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/11 10:32:43 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst)
		return ;
	while (*lst != NULL)
	{
		temp = *lst;
		(del)((*lst)->content);
		temp = temp->next;
		free (*lst);
		*lst = temp;
	}
	*lst = NULL;
}
