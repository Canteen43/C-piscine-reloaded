#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	int	d;
	int	b;
	int	c;
	
	a = 9;
	b = 4;
	c = 0;
	d = 0;
	
	
	ft_div_mod(a, b, &c, &d);
	ft_putint(a);
	ft_putint(b);
	ft_putint(c);
	ft_putint(d);
}
