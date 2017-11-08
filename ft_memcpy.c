#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char 				*p;
	
	p = dest;
	while(n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;

	return (p);
}

