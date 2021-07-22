/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:30:07 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/07 10:49:04 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	only_print;
	int	i;

	only_print = 1;
	if (str == 0)
		return (only_print);
	i = -1;
	while (str[++i])
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
		{
			only_print = 0;
			return (only_print);
		}
	}
	return (only_print);
}
