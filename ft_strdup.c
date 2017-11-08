#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t 	len;
	char 	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * len);
	ft_memcpy(dup, s, len);
	return (dup);
}
