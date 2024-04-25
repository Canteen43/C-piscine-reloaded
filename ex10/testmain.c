#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
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
	int	*b;
	int	*c;
	
	a = 21;
	d = 42;
	b = &a;
	c = &d;
	
	ft_swap(&a, &d);
	ft_putint(a);
}
