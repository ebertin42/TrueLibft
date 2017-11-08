#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;
	
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j] == s1[i + j] && j < n)
			++j;
		if (s2[j] == '\0' || j == n)
			return (s1 + i);
		++i;	
	}
	return (NULL);
}

/* TEST */
int main(int argc, char **argv)
{
	printf("%s\n", ft_strnstr(argv[1], argv[2], 2));

	return (0);
}
