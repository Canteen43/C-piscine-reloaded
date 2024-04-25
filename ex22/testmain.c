#include <stdlib.h>
#include <unistd.h>

#define ABS(Value) (Value >= 0 ? Value : Value * -1)

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr_nl(char *a)
{
	while(*a)
		ft_putchar(*a++);
	ft_putchar('\n');
}

void	ft_putint_help(int a)
{
	if (a < -10)
		ft_putint_help(a / 10);
	ft_putchar((a % 10) * -1 + 48);
}

void	ft_putint(int a)
{
	if (a < 0)
	{
		ft_putchar('-');
		ft_putint_help(a);
	}
	else
		ft_putint_help(a  * -1);
}

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;
	
	a = malloc(sizeof(int) * (max - min));
	i = -1;
	while ((max - min) > ++i)
		a[i] = min + i;
	return (a);
}

int	main(void)
{
	int	i;
	
	i = -2147483647;
	ft_putint(ABS(i));
}
