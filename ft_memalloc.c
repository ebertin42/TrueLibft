#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *p;

	p = (void *)malloc(size);
	ft_bzero(p, size);
	return (p);
}
