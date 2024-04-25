#include <unistd.h>
#include <stdlib.h>


int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	
	count = 0;
	while (*tab)
		if (f(*tab++) == 1)
			count++;
	return count;
}

int	ft_return_1_for_A(char *tab)
{
	if (tab[0] == 'A')
		return 1;
	else
		return 2;
}

void	ft_putstr(char *a)
{
	int	i;
	
	i = 0;
	while (*a)
		write(1, a++, 1);
	write(1, "\n", 1);
}

void	ft_putdig(int i)
{
	char	c;
	
	c = 48 + i;
	write(1, &c, 1);
}

int	main(void)
{
	char	*a[] = {"A very large hole",
		"An apple",
		"Beers",
		"Africa",
		0
		};
	int	i = 0;

	while (a[i])
		ft_putstr(a[i++]);
	i = ft_count_if(a, ft_return_1_for_A);
	ft_putdig(i);
}
