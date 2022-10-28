/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:07:29 by mstiedl           #+#    #+#             */
/*   Updated: 2022/10/28 16:11:43 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

/*int main()
{
	int c = '\n';

	printf("%i", ft_isalnum(c));
}*/