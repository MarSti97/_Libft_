/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:23:24 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/10 15:34:06 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*subs;

	if (start >= ft_strlen(str))
		{
			subs = malloc(sizeof(char) * 1);
			subs[0] = '\0';
		}
	if (ft_strlen(str) < start)
		return (subs);
	subs = malloc(len + 1);
	if (!subs)
		return (NULL);
	ft_memcpy(subs, (char *)&str[start], len);
	subs[len] = '\0';
	return (subs);
}

/* int main()
{
    char str[] = "lorem ipsum dolor sit amet";
	
	printf("%s\n", ft_substr(str, 400, 20));
} */