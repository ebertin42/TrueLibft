#include <stdlib.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *start;

	start = dest;
	while (n-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (n--)
		*dest = '\0';
	return (start);
}
