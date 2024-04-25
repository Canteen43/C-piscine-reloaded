#include <unistd.h>

void	ft_is_negative(int a);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(void)
{
	ft_is_negative(-5);
}
