/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:13:44 by mstiedl           #+#    #+#             */
/*   Updated: 2022/11/02 16:48:46 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;

	ptr = malloc((strlen(str) - 1 * (sizeof(char) + 1)));
    if (ptr[0] == '\0')
    {
        return (0);
    }
	return (ptr);
}


