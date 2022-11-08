/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:22:51 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/08 18:20:38 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char 	*t_dest;
	char	*t_src;
	
	t_dest = (char *)dest;
	t_src = (char *)src;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (n != 0)
		{
		t_dest[n] = t_src[n];
		n--;
		}
	}
	else
		ft_memcpy(t_dest, t_src, n);
	return (t_dest);
}

int main()
{
	char src[] = "consectetur";
	char *dest = "lorem ipsum dolor sit amet";

	memmove(dest, src, 5);
	printf("my = %s\n", dest);
	printf("src = %s\n", src);
}