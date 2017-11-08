#include <unistd.h>
#include "libft.h"

void	ft_pustsr_fd(char const *s, int fd)
{
	size_t len;

	len = ft_strlen(s);
	write(fd, s, len);
}
