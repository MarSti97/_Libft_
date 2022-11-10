/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:25:47 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/10 16:38:02 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	
	temp = *lst;
	while (temp->next != NULL)
	{
		(del)(temp->content);
		free (temp);
		temp = temp->next;
	}
	temp->next = NULL;
}
