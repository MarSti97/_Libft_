/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:08:15 by mstiedl           #+#    #+#             */
/*   Updated: 2022/10/31 11:06:15 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		if (i < n)
		{
			((unsigned char *)str)[i] = c;
			i++;
		}
	}
	return (str);
}

/*int main()
{
	char str[] = {"This is string.h library function"};

	ft_memset(str, '$', 7);
	printf("%s", str);
}*/
