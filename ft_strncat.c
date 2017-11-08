#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	while (*dest++);
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
