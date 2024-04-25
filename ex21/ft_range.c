/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:49:00 by kweihman          #+#    #+#             */
/*   Updated: 2024/04/17 21:49:03 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	if (min >= max)
		return (0);
	a = malloc(sizeof(int) * (max - min));
	i = -1;
	while ((max - min) > ++i)
		a[i] = min + i;
	return (a);
}
