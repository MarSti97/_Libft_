/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:29:54 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/09 12:40:42 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (0);
	}
	while (i < nmemb * size)
	{
		((unsigned char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
