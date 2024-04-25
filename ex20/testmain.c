#include <stdlib.h>
#include <unistd.h>

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

void	ft_putint(int a)
{
	if (a > 10)
		ft_putint(a / 10);
	ft_putchar(a % 10 + 48);
}

char	*ft_strdup(char *src)
{
	int	i;
	char*	ptr;

	i = 0;
	while (src[i++])
		;
	ptr = malloc(i + 1);
	i = -1;
	while (src[++i])
		ptr[i] = src[i];
	ptr[i] = '\0';
	return ptr;
}

int	main(void)
{
	char *old;
	char *new;
	
	old = "Hi, I'm Karl :)";
	new = ft_strdup(old);
	new[11] = 's';
	ft_putstr_nl(old);
	ft_putstr_nl(new);
}
