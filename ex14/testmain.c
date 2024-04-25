#include <unistd.h>

int ft_sqrt(int nb)
{
	int	a;
	
	a = 1;
	while (a*a < nb)
		a += 1;
	if (a*a == nb)
		return a;
	return 0;
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
	
	a = 0;
	b = 5;
	c = 0;
	d = 0;
	
	
	a = ft_sqrt(a);
	ft_putint(a);
	
}
