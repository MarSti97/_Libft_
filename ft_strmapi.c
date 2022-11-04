/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:56:01 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/04 12:33:28 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*newstr;

	i = 0;
	newstr = malloc(ft_strlen(str) + 1);
	if (!newstr || !str)
		return (NULL);
	while (str[i])
	{
		newstr[i] = (*f)(i, str[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/* int main()
{
	char str[] = "Hello, World";
	
	printf("%s", ft_strmapi(str, &mapi));
} */