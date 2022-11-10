/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:03:10 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/10 16:20:41 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	check_start(char const *str, char const *set)
{
	int	i;
	int	i2;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		i2 = 0;
		while (set[i2])
		{
			if (str[i] == set[i2])
			{
				res += 1;
				break ;
			}
		i2++;
		}
		if (res <= i)
			break ;
		i++;
	}
	return (res);
}

static int	check_end(char const *str, char const *set)
{
	int		i;
	int		i2;
	size_t	res;

	i = ft_strlen(str) - 1;
	res = 0;
	while (i > 0)
	{
		i2 = 0;
		while (set[i2])
		{
			if (str[i] == set[i2])
			{
				res += 1;
				break ;
			}
			i2++;
		}
		if (res <= (ft_strlen(str) - 1 - i))
			break ;
		i--;
	}
	return (res);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t		i;
	char	*res;
	size_t		len;
	size_t		start;

	i = 0;
	start = check_start(str, set);
	len = (ft_strlen(str) - start - check_end(str, set));
	printf("The len: %li\n", len);
	printf("string len: %li\n", ft_strlen(str));
	
	if (len <= 0)
	{
		res = (char *)malloc(sizeof(char));
		if (!res)
			return (0);
		return(res = "");
	}
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (i != len)
	{
		res[i] = str[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

/* int main()
{
    char str[] = "\n\n\n\n  \t\t\t\t";
    char set[] = "\n \t";

    printf("Start: %i\n", check_start(str, set));
    printf("End: %i\n", check_end(str, set));
    printf("String: %s\n", ft_strtrim(str, set));
} */
