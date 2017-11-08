#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	found = 0;
	while (*s++)
		if (*s == c)
			found = (char *)s;
	if (found)
		return (found);
	else
		return ((char *)s);
}
