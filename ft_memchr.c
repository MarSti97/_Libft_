/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:58:44 by mstiedl           #+#    #+#             */
/*   Updated: 2022/10/28 16:52:28 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if ((char *)str[i] = '\0')
		return (0);
	while (i < n)
	{
		if (str[i] == c)
		{
			ptr = (char *)&str[i];
			return (ptr);
		}
	i++;
	}
	return (NULL);
}

int main()
{
	char str[] = "Hello World!";
	int c = 'o';

	printf("My func = %s", ft_memchr(str, c, 10));
	printf("The func = %s", memchr(str, c, 10));
}
