/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:22:51 by mstiedl           #+#    #+#             */
/*   Updated: 2022/10/28 18:04:13 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	temp = src;
	if (((char *)src)[0] == '\0')
		return (dest);
	while (i != n)
	{
		((char *)dest)[i] = ((char *)temp)[i];
		i++;
	}
	return (dest);
}

int main()
{
	char src[] = {"lorem ipum dolor sit atem"};
	char *dest = src + 1;

	ft_memmove(dest, src, 8);
	printf("my = %s\n", dest);
	memmove(dest, src, 8);
}	printf("func = %s\n", dest);
