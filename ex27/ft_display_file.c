/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:49:17 by ybarraul          #+#    #+#             */
/*   Updated: 2017/11/07 16:08:17 by ybarraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define FT_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int		i;
	int		ret;
	char	buf[FT_SIZE + 1];

	if (ac != 2)
	{
		if (ac < 2)
			write(1, "File name missing.\n", 19);
		if (ac > 2)
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	i = open(av[1], O_RDWR);
	ret = 1;
	while (ret)
	{
		ret = read(i, buf, FT_SIZE);
		if (ret == -1)
			return (0);
		buf[ret] = '\0';
		write(1, buf, ft_strlen(buf));
	}
	close(i);
	return (0);
}
