#include <stdlib.h>
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*pnt;
	
	pnt = dest;
	while(n--)
	{
		if (*(unsigned char *)src == c)
			break;
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	}
	return (pnt);
}

