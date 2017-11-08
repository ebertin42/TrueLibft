#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	while (*dest++)
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

/* TESTS */
int	main()
{
	char *src = "DEFGH";
	char *dest = (char *)malloc(sizeof(char) * 3);
	dest = ft_strdup("abc");
	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}
