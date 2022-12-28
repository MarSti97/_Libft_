/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:37:44 by mstiedl           #+#    #+#             */
/*   Updated: 2022/12/28 17:25:18 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int nb, int fd)
{
	int		len;
	long	i;

	len = 0;
	i = nb;
	if (i < 0)
	{
		len += write(1, "-", 1);
		i *= -1;
	}
	if (i > 9)
		len += ft_putnbr((i / 10));
	len += ft_putchar(i % 10 + 48);
	return (len);
}

/* int main()
{
    ft_putnbr_fd(-2147483648LL, 2);
} */