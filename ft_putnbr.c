#include <unistd.h>
#include <limits.h> 

void	ft_putnbr(int n)
{
	char c;

	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
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
		write(1, &c, 1);	
	}
}

/* TESTS */
int main()
{
	ft_putnbr(10);
	write(1, "\n", 1);
	ft_putnbr(1234);
	write(1, "\n", 1);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	ft_putnbr(INT_MAX);
	write(1, "\n", 1);
	ft_putnbr(-10);
	write(1, "\n", 1);
	ft_putnbr(-12348);
	return (0);
}
