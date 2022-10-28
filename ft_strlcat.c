/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:39:24 by mstiedl           #+#    #+#             */
/*   Updated: 2022/10/28 16:18:26 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	len = ft_strlen(dest);
	destlen = len;
	srclen = ft_strlen(src);
	if (destlen >= size || size == 0)
    	{
			return (srclen + size);
    	}
	while (src[i])
	{
		if (i < size - destlen - 1)
		{
			dest[len] = src[i];
			len++;
		}
		i++;
	}
	dest[len] = '\0';
	return (destlen + i);
}

/*int main()
{
	char dest[] = "Hello ";
	char src[] = "World!";
    size_t num = 7;

	printf("%ld\n", strlcat(dest, src, num));
	printf("%s\n", dest);
}*/
