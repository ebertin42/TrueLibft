#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *pd;
	char *ps;

	pd = dest;
	ps = src;
	if (ps < src)
		while (n--)
			*(pd + n) = *(ps + n);
	else
		while (n--)
			*pd++ = *ps++;

	return (dest);
}

/* TEST */
int main(int argc, char **argv)
{
	unsigned char *dest;

	dest = malloc(16);
	ft_memmove(dest, argv[1], 12);
	printf("%s\n", dest);
ft_memmove(dest, dest + 2, 12);
	
	printf("%s\n", dest);
	return (0);
}
