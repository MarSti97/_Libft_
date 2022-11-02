/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:22:51 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/02 09:46:17 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (0 < n)
		{
		((unsigned char *)dest)[n] = ((const char *)src)[n];
		n--;
		}
	}
	while (i != n)
	{
		((unsigned char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}

/*int main()
{
	char src[] = {"abcdefg"};
	char *dest = src + 1;

	ft_memmove(dest, src, 3);
	printf("my = %s\n", dest);
	memmove(dest, src, 3);
	printf("src = %s\n", src);
	printf("func = %s\n", dest);
}*/