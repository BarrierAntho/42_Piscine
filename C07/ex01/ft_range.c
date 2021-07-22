/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:41:59 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/17 16:52:39 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_gap(int a, int b)
{
	int	res;

	res = 0;
	if ((a >= 0 && b >= 0) || (a <= 0 && b <= 0))
		res = b - a;
	else if (a <= 0 && b >= 0)
		res = b - a;
	return (res);
}

int	*ft_range(int min, int max)
{
	int	*res;
	int	len_tab;
	int	i;

	if (min >= max)
		return (0);
	len_tab = ft_gap(min, max);
	res = malloc(sizeof(*res) * len_tab);
	if (res == 0)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
