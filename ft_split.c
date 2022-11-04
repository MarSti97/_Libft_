/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:30:55 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/04 16:36:49 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	counter(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			count += 1;
		i++;
	}
	return (count + 1);
}

char	**mem_all(char const *str, char c)
{
	int		i;
	char	**res;
	int		count;
	int		size;
	int		words;

	count = 0;
	i = 0;
	words = counter(str, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	while (count != words)
	{
		size = 0;
		while (str[i])
		{
			if (str[i] == c)
				break ;
			i++;
			size++;
		}
		res[count] = (char *)malloc(sizeof(char) * (size + 1));
		count++;
		i++;
	}
	return (res);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		i2;
	char	**res;
	int		index;

	i = 0;
	i2 = 0;
	index = 0;
	res = mem_all(str, c);
	if (!res || !str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
		{
			res[index++][i2] = '\0';
			i++;
			i2 = 0;
		}
	res[index][i2++] = str[i++];
	}
	res[index++][i2] = '\0';
	res[index] = NULL;
	return (res);
}

/* int main()
{
    char const str[] = "Hello World, this is Marcell!";
    char c = ' ';
	char **res = ft_split(str, c);
	
	printf("Result word 1: %s\n", res[0]);
	printf("Result word 2: %s\n", res[1]);
	printf("Result word 3: %s\n", res[2]);
	printf("Result word 4: %s\n", res[3]);
	printf("Result word 5: %s\n", res[4]);
	printf("Result word NULL: %s\n", res[5]);
} */
