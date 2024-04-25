/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:12:04 by kweihman          #+#    #+#             */
/*   Updated: 2024/04/15 17:12:06 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_is_negative(int a)
{
	if (a < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
