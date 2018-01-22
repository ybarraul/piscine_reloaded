/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:21:24 by ybarraul          #+#    #+#             */
/*   Updated: 2017/11/07 18:28:26 by ybarraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int n;
	int i;

	n = 1;
	i = 0;
	if (ac < 2)
		return (0);
	while (n < ac)
	{
		while (av[n][i])
		{
			ft_putchar(av[n][i]);
			i++;
		}
		av[n][i] = '\0';
		i = 0;
		ft_putchar('\n');
		n++;
	}
	return (0);
}
