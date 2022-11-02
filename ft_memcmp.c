/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:15:25 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/02 11:58:40 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	int		res;

	i = 0;
	res = 0;
	while (i != n - 1
		&& ((unsigned char *)str1)[i] == ((unsigned char *)str2)[i])
		i++;
	res = (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
	if (n < 1)
		res = 0;
	return (res);
}

/*int main()
{
    char str[] = "t\200";
    char str2[] = "t\0";
    printf("The function: %i\n", memcmp(str, str2, 2));
    printf("My function: %i", ft_memcmp(str, str2, 2));
}*/