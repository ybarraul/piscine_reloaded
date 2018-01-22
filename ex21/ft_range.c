/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:58:28 by ybarraul          #+#    #+#             */
/*   Updated: 2017/11/08 10:33:35 by ybarraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		to;
	int		*diff;

	i = 0;
	to = min;
	if (min >= max)
		return (NULL);
	else
		i = max - min;
	if (!(diff = malloc(sizeof(*diff) * (i + 1))))
		return (NULL);
	i = 0;
	while (to < max)
	{
		diff[i] = to;
		i++;
		to++;
	}
	diff[i] = '\0';
	return (diff);
}
