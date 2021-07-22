/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:55:08 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/05 18:09:01 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	only_alpha;
	int	i;

	only_alpha = 1;
	if (str == 0)
		return (only_alpha);
	i = -1;
	while (str[++i])
	{
		if (str[i] < 'A')
		{
			only_alpha = 0;
			return (only_alpha);
		}
		else if ((str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			only_alpha = 0;
			return (only_alpha);
		}
	}
	return (only_alpha);
}
