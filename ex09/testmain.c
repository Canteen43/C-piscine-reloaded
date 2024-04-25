#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
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
	int	*b;
	
	a = 21000;
	b = &a;
	ft_ft(b);
	ft_putint(a);
}
