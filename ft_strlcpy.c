/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:32:32 by mstiedl           #+#    #+#             */
/*   Updated: 2022/10/28 16:16:57 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (len < 1)
		return (0);
	while (i != size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest = '\0';
	return (len);
}

/*int main()
{
	char dest[] = {"Hello,"};
	char src[] = {"World"};

	printf("%li\n", ft_strlcpy(dest, src, sizeof(dest)));
	printf("%s\n", dest);
	printf("%s\n", src);
}*/
