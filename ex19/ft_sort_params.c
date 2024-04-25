/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:36:48 by kweihman          #+#    #+#             */
/*   Updated: 2024/04/17 16:36:50 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	ft_putstr_nl(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char *argv[])
{
	int	swap;
	int	i;

	swap = 1;
	while (swap == 1)
	{
		swap = 0;
		i = 0;
		while (i + 1 < argc)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				argv[0] = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = argv[0];
				swap = 1;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
		ft_putstr_nl(argv[i++]);
}
