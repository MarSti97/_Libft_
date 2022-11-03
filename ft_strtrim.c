/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:03:10 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/03 16:01:36 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	check_start(char *str, int size, char *set)
{
	int i;
	int i2;

	i = 0;
	i2 = 0;
	while (ft_strlen(set > i2))
	{
		while (set[i])
		{
			ft_memchr(str, set[i], i2); 
		} 
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		i;
	int		count;
	char	*temp;
	char	*res;
	
	i = 0;
	count = ft_strlen(set);
	res = malloc(ft_strlen(str) - ft_strlen(set) + 1);
	while (count > 0)
	{
		if ()	
	}
	while (set[i])
	{
		res = ft_memchr(str, set[i], ft_strlen(set));
		
	}
}