/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:38:45 by mstiedl           #+#    #+#             */
/*   Updated: 2022/10/28 16:20:57 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	    i;
	char    *ptr;

	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		if (str[i] == c)
		{
			ptr = (char *)&str[i];
			return (ptr);
			break ;
		}
	i--;
	}
	return (NULL);
}

/*int main()
{
	char str[] = "Hello World!";
	int c = 'o';

	printf("%s", ft_strrchr(str, c));
}*/
