#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;
	
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j] == s1[i + j])
			++j;
		if (s2[j] == '\0')
			return (s1 + i);
		++i;	
	}
	return (NULL);
}

/* TEST */
int main(int argc, char **argv)
{
	printf("%s\n", ft_strstr(argv[1], argv[2]));

	return (0);
}
