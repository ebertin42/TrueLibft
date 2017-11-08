#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
		f(s++);
}

/* TEST
	#include <stdio.h>
	cc ft_striter.c ft_strdup.c ft_strlen.c ft_memcpy.c && ./a.out

void	test_up(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 'a' - 'A';
}

int	main(int ac, char **av)
{
	char *dup;

	dup = ft_strdup(av[1]);
	ft_striter(dup, test_up);
	printf("%s\n", dup);
	return (0);
}
*/
