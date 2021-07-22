/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:25:41 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/14 08:17:20 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen05(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base05(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[j])
		{
			if (i != j)
			{
				if (str[i] == str[j] || str[i] == '-' || str[i] == '+' )
					return (1);
				else if (str[i] < 33 || str[i] == 127)
					return (2);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	sign;
	int	i;

	nb = 0;
	sign = 1;
	if (*base != 0 && ft_strlen05(base) > 1 && ft_check_base05(base) == 0)
	{
		i = 0;
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] && ft_check_in_base(str[i], base) >= 0)
		{
			nb = nb * ft_strlen05(base) + ft_check_in_base(str[i], base);
			i++;
		}
	}
	return (nb * sign);
}
