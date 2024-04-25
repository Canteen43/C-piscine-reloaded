#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	
	result = 1;
	if (nb < 0)
		return 0;
	while (nb > 1)
	{
		result *= nb;
		nb -= 1;
	}
	return result;
}

void	ft_putdig(int a)
{
	a += 48;
	write(1, &a, 1);
}

void	ft_putint(int a)
{
	if (a > 10)
		ft_putint(a / 10);
	ft_putdig(a % 10);
}

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	
	a = 9;
	b = -4;
	c = 0;
	d = 0;
	
	
	b = ft_iterative_factorial(b);
	ft_putint(b);
	
}
