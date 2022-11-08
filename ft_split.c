/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:30:55 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/08 17:58:57 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	counter(char const *str, char c)
{
	int	i;
	int	count;
	int	skip;

	i = 0;
	count = 0;
	skip = 0;
	while (str[i])
	{
		if (str[i] != c && skip == 0)
		{
			count += 1;
			skip = 1;
		}
		i++;
		while (str[i] == c)
		{
			skip = 0;
			i++;
		}
	}
	if (count <= 1)
		return (1);
	return (count);
}

char	**mem_all(char const *str, char c, char **res)
{
	int		i;
	int		count;
	int		size;

	count = 0;
	i = 0;
	size = 0;
	if (!res)
		return (NULL);
	while (str[size])
	{
		if (str[size] == c)
		{
			res[count] = ft_substr(str, i, (size - i));
			count++;
			while (str[size] == c)
				size++;
			i = size;
		}
		size++;
	}
	if (count != counter(str, c))
		res[count] = ft_substr(str, i, (size - i));
	return (res);
}

char	**ft_split(char const *str, char c)
{
	char	**res;
	
	res = (char **)malloc(sizeof(char *) * (counter(str, c) + 1));
	res = mem_all(str, c, res);
	if (!res || !str)
		return (NULL);
	res[counter(str, c) + 1] = NULL;
	return (res);
}

int main()
{
    char const str[] = "           ";
    char c = ' ';
	char **res = ft_split(str, c);
	
	printf("%i\n", counter(str, c));
	printf("Result word 1: %s\n", res[0]);
	printf("Result word 2: %s\n", res[1]);
	printf("Result word 3: %s\n", res[2]);
	printf("Result word 4: %s\n", res[3]);
	printf("Result word 5: %s\n", res[4]);
	printf("Result word NULL: %s\n", res[5]);
}
