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
	if (a < 0)
	{
		a *= -1;
		write(1, "-", 1);
	}
	if (a > 10)
		ft_putint(a / 10);
	ft_putdig(a % 10);
}

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int	main(void)
{
	char	str1[] = "Hi, I'm Karl :)";
	char	str2[] = "Hi, I'm Kars :)";

	ft_putint(ft_strcmp(str1, str2));
}
