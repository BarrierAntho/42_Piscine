/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:21:04 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/20 09:11:49 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen_convert(char *str);
int		ft_strlen_int(int nb);
int		ft_check_base(char *base);
int		ft_check_in_base(char c, char *base);
void	ft_reverse(char *str);

long long int	ft_atoi_base(char *str, char *base)
{
	long long int	nb;
	long long int	sign;
	int				i;

	nb = 0;
	sign = 1;
	if (ft_strlen_convert(base) > 1 && ft_check_base(base) == 0)
	{
		i = 0;
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= (-1);
			i++;
		}
		while (str[i] && ft_check_in_base(str[i], base) >= 0)
		{
			nb = nb * ft_strlen_convert(base) + ft_check_in_base(str[i], base);
			i++;
		}
	}
	return (nb * sign);
}

void	ft_putnbr_rec(long long int nb, char *base, char *result, int neg)
{
	int	len_base;
	int	len_int;
	int	i;

	len_base = ft_strlen_convert(base);
	len_int = ft_strlen_int(nb);
	i = 0;
	while (nb / len_base >= 1)
	{
		result[i] = base[nb % len_base];
		nb = nb / len_base;
		i++;
	}
	if (nb / len_base == 1)
		result[i] = base[nb / len_base];
	else
		result[i] = base[nb % len_base];
	if (neg == 1)
	{
		i++;
		result[i] = '-';
	}
	i++;
	result[i] = '\0';
}

char	*ft_putnbr_base(long long int nb, char *base, char *final_text)
{
	long long int	tmp_nb;
	int				len_base;
	int				is_neg;

	tmp_nb = 0;
	is_neg = 0;
	len_base = ft_strlen_convert(base);
	if (nb < 0)
	{
		is_neg = 1;
		tmp_nb = nb * (-1);
	}
	else
	{
		tmp_nb = nb;
	}
	ft_putnbr_rec(tmp_nb, base, final_text, is_neg);
	return (final_text);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*result;
	long long int	atoi_res;
	int				nb_len;

	if (ft_check_base(base_from) != 0 || ft_check_base(base_to) != 0)
		return (0);
	else if (*base_from == 0 || *base_to == 0)
		return (0);
	else if (ft_strlen_convert(base_from) <= 1)
		return (0);
	else if (ft_strlen_convert(base_to) <= 1)
		return (0);
	atoi_res = ft_atoi_base(nbr, base_from);
	nb_len = ft_strlen_int(atoi_res);
	result = malloc(sizeof(*result) * (nb_len + 1));
	if (!result)
		return (0);
	result[0] = '\0';
	ft_putnbr_base(atoi_res, base_to, result);
	ft_reverse(result);
	return (result);
}
