/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   ft_itoa.c	  :+:	  :+:	:+:   */
/*	+:+ +:+	 +:+	 */
/*   By: mstiedl <mstiedl@student.42lisboa.com>	 +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2022/11/04 09:31:55 by mstiedl	   #+#	#+#	 */
/*   Updated: 2022/11/04 09:46:46 by mstiedl	  ###   ########.fr	   */
/*	*/
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

 static int	counter(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*make_neg(int n, int length)
{
	char	*str;
	int		i;
	long	max;

	max = n;
	i = length + 1;
	str = malloc(length + 2);
	if (!str)
		return (NULL);
	str[i] = '\0';
	max = max * -1;
	while (i > 1)
	{
		str[--i] = max % 10 + 48;
		max /= 10;
	}
	str[0] = '-';
	return (str);
}

char	*make_pos(int n, int length)
{
	char	*str;
	int		i;

	i = length;
	str = malloc(length + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i > 0)
	{
		str[--i] = n % 10 + 48;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = counter(n);
	if (n == 0)
	{
		str = malloc(2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
		str = make_neg(n, length);
	else
		str = make_pos(n, length);
	if (!str)
		return (NULL);
	return (str);
}

/* int main()
{
	int i = -2147483648LL;

	printf("Number to allocated: %i\n", counter(i));
	printf("Sring = %s\n", ft_itoa(i));
} */