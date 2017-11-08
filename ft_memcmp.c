#include <stdlib.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = s1;
	ps2 = s2;
	while (*ps1 == *ps2 && n--)
	{
		ps1++;
		ps2++;
	}
	return (*ps1 - *ps2);	
}

/* TEST
int main (int argc, char **argv)
{
	printf("%d\n", ft_memcmp(argv[1], argv[2], 5));

	return (0);
}
*/
