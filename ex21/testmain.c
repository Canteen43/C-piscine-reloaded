/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:55:00 by kweihman          #+#    #+#             */
/*   Updated: 2024/04/24 14:55:03 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr_nl(char *a)
{
	while (*a)
		ft_putchar(*a++);
	ft_putchar('\n');
}

void	ft_putint(int a)
{
	if (a > 10)
		ft_putint(a / 10);
	ft_putchar(a % 10 + 48);
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
	int	max;
	int	min;
	int	*b;
	int	i;

	min = 1;
	max = 6;
	b = ft_range(min, max);
	i = -1;
	while (++i < max - min)
		ft_putint(b[i]);
}
