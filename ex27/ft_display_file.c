/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:27:10 by kweihman          #+#    #+#             */
/*   Updated: 2024/04/25 14:43:52 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

void	ft_print_error(char *str)
{
	write(2, str, ft_strlen(str));
}

void	ft_print_buffer(char *str, int rr)
{
	write(1, str, rr);
}

int	ft_error_codes(int error_code)
{
	if (error_code == 0)
		ft_print_error("File name missing.\n");
	if (error_code == 1)
		ft_print_error("Too many arguments.\n");
	if (error_code == 2)
		ft_print_error("Cannot read file.\n");
	return (1);
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	buffer[256];
	int		rr;

	if (argc == 1)
		return (ft_error_codes(0));
	if (argc > 2)
		return (ft_error_codes(1));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_error_codes(2));
	while (0 == 0)
	{
		rr = read(fd, buffer, sizeof(buffer));
		if (rr == -1)
			return (ft_error_codes(2));
		else if (rr == 0)
			break ;
		else
			ft_print_buffer(buffer, rr);
	}
	close(fd);
}
