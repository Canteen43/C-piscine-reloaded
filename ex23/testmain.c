#include "ft_point.h"

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
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
		write(1, "-", 1);
		ft_putint_help(a);
	}
	else
		ft_putint_help(a * -1);
}

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;
	t_point	point2;

	set_point(&point);
	set_point(&point2);
	ft_putint(point.x);
	ft_putint(point2.y);	
	return (0);
}
