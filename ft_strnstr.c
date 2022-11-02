/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:16:14 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/02 13:45:15 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	i2;

	i = 0;
	if (str1[0] == '\0')
		return (0);
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str1[i] && i < n)
	{
		i2 = 0;
		while (str2[i2] && (str1[i + i2] == str2[i2]) && (i + i2) < n)
		{
			i2++;
			if (str2[i2] == '\0')
				return ((char *)&str1[i]);
		}
		i++;
	}
	return (NULL);
}

/* int main()
{
    char str[] = "lorem ipsum dolor sit amet";
    char str2[] = "";
    
   //	printf("The function: %s\n", strnstr(str, str2, 10));
    printf("My function: %s", ft_strnstr(str, str2, 10));
} */