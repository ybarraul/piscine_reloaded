/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:06:33 by ybarraul          #+#    #+#             */
/*   Updated: 2017/11/07 16:22:00 by ybarraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb > 12) || (nb < 0))
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	else
		return (1);
	return (nb);
}
