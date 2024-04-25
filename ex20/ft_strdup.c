/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:09:55 by kweihman          #+#    #+#             */
/*   Updated: 2024/04/17 20:09:56 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i++])
		;
	ptr = malloc(i + 1);
	i = -1;
	while (src[++i])
		ptr[i] = src[i];
	ptr[i] = '\0';
	return (ptr);
}
