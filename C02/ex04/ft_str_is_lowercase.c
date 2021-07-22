/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:19:16 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/05 18:23:49 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	only_low;
	int	i;

	only_low = 1;
	if (str == 0)
		return (only_low);
	i = -1;
	while (str[++i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			only_low = 0;
			return (only_low);
		}
	}
	return (only_low);
}
