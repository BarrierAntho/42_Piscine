/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:04:54 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/05 18:15:40 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	only_num;
	int	i;

	only_num = 1;
	if (str == 0)
		return (only_num);
	i = -1;
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			only_num = 0;
			return (only_num);
		}
	}
	return (only_num);
}
