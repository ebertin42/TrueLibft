#include <unistd.h>
#include <limits.h> 

void	ft_putnbr(int n, int fd)
{
	char c;

	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0 )
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = '0' + n; 
		write(fd, &c, 1);	
	}
}

/* TESTS */
int 	main()
{
	ft_putnbr_fd(10);
	write(1, "\n", 1);
	ft_putnbr_fd(1234);
	write(1, "\n", 1);
	ft_putnbr_fd(INT_MIN);
	write(1, "\n", 1);
	ft_putnbr_fd(INT_MAX);
	write(1, "\n", 1);
	ft_putnbr_fd(-10);
	write(1, "\n", 1);
	ft_putnbr_fd(-12348);
	return (0);
}
