#include "libft.h"

void	*ft_memset(void *s, int c, size_t t)
{
	char	*pnt;

	if (t == 0)
		return (s);
	pnt = (char *)s;
	while (t--)
	{
		*pnt = (char)c;
		if (t)
			pnt++;
	}
	return (s);
}