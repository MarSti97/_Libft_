/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:13:44 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/03 10:05:43 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *str)
{
	char	*ptr;

	ptr = malloc(ft_strlen(str) + 1);
	ptr = ft_memcpy(ptr, str, ft_strlen(str) + 1);
	if (ptr[0] == '\0')
	{
		return (0);
	}
	return (ptr);
}

/* int main()
{
    char str[] = "lorem ipsum dolor sit amet";
    
    printf("%s", ft_strdup(str));
} */
