/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:24:42 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/15 15:33:38 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	max_i;

	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	i = 2;
	max_i = nb / 2;
	while (i < max_i)
	{
		if (nb % i == 0)
			break ;
		i++;
	}
	if (nb % i == 0 && nb != i)
		return (0);
	return (1);
}
