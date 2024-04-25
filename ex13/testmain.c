#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return 0;
	if (nb == 0)
		return 1;
	return nb * ft_recursive_factorial(nb - 1);
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
	
	a = 11;
	b = 5;
	c = 0;
	d = 0;
	
	
	b = ft_recursive_factorial(b);
	ft_putint(b);
	
}
