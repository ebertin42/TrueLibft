#include <stdlib.h>
#include "libft.h"

#define ABS(X) ((X) < 0 ? - (X) : (X))

int	lenght(int n)
{
	int	len;

	len = 0;
	while (n /= 10)
		++len;

	return (len + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;

	len = lenght(n);
	str = malloc(sizeof (char) * len);
	str[0] = 48;
	if (n < 0)
	{
		str[0] = 45;
		len++;
	}
	str[len] = 0;
	while (n)
	{
		str[--len] = 48 + ABS(n % 10);
		n /= 10;
	}
	return (str);
}
