#include <stdio.h>
#include "libft.h"

int main()
{
	char c = '1';
	char str[] = {"Hello, World"};
	char dest[] = {"Marcell"};
	char src[] = {"Stiedl"};

	printf("Alphabetical: %i\n", ft_isalpha(c));
	printf("Numeric: %i\n", ft_isdigit(c));
	printf("Alphanumeric: %i\n", ft_isalnum(c));
	printf("Ascii: %i\n", ft_isascii(c));
	printf("Printable: %i\n", ft_isprint(c));
	printf("Length of String: %li\n", ft_strlen(str));
	ft_memset(str, '$', 5);
	printf("String with memeset: %s\n", str);
	ft_bzero(str, 5);
	printf("String with bzero: %s\n", str);
	ft_memcpy(dest, src, 2);
	printf("Dest of memcpy: %s\n", dest);
	ft_memmove(dest, src, 2);
        printf("Dest of memmove: %s\n", dest);

}
