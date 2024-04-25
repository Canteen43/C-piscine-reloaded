#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
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

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(void)
{
	char	str[] = "Hi, I'm Karl :)";

	ft_putstr(str);
}
