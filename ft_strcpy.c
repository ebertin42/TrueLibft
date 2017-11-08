#include <stdlib.h>
#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char *start;

	start = dest;
	while (*src)
		*dest++ = *src++;
	return (start);
}

/* TEST */
int	main(int ac, char **av)
{

}
