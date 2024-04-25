#include <unistd.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

void	ft_write_last_dig(int i)
{
	i = (i % 10) + 48;
	write(1, &i, 1);
}

int	main(void)
{
	int	*tab;
	int	len;
	int	i;

	len = 3;
	tab = malloc(len * sizeof(int));
	i = 0;
	while (i++ < len)
		tab[i] = i;
	ft_foreach(tab, len, ft_write_last_dig);
}
