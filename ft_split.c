/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:30:55 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/14 16:38:23 by mstiedl          ###   ########.fr       */
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
	return (count);
}

static char	**mem_all(char const *str, char c, char **res)
{
	int		i;
	int		count;
	int		size;

	count = 0;
	i = 0;
	size = 0;
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
	res[count] = ft_substr(str, i, (size - i));
	return (res);
}

char	**ft_split(char const *str, char c)
{
	char	**res = NULL;
	int		words;
	char	*ptr;

	words = counter(str, c);
	ptr = ft_strtrim(str, (char *)&c);
	if (!ptr)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res = mem_all(ptr, c, res);
	if (!res)
		return (NULL);
	res[words] = NULL;
	return (res);
}

/* int main()
{
    char const str[] = "^^^1^^2a,^^^^3^^^^--h^^^^";
    char c = '^';
	char **res = ft_split(str, c);
	
	printf("%i\n", counter(str, c));
	printf("Result word 1: %s\n", res[0]);
	printf("Result word 2: %s\n", res[1]);
	printf("Result word 3: %s\n", res[2]);
	printf("Result word 4: %s\n", res[3]);
	printf("Result word 5: %s\n", res[4]);
	printf("Result word NULL: %s\n", res[5]);
}
 */