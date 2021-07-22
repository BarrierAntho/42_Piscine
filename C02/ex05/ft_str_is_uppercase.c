/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:24:47 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/05 18:28:54 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	only_up;
	int	i;

	only_up = 1;
	if (str == 0)
		return (only_up);
	i = -1;
	while (str[++i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			only_up = 0;
			return (only_up);
		}
	}
	return (only_up);
}
