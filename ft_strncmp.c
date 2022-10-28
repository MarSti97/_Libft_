/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:11:06 by mstiedl           #+#    #+#             */
/*   Updated: 2022/10/28 16:15:59 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
    
	i = 0;
	while (str1[i] && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

/*int main()
{
	char str1[] = "";
	char str2[] = "";

	printf("My func = %i\n", ft_strncmp(str1, str2, 5));
	printf("The func = %i\n", strncmp(str1, str2, 5));
}*/
