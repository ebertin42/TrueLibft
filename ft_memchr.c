#include <stdlib.h>
#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(char *)s == c)
			return (s);
		s++;
	}
	return (NULL);
}

