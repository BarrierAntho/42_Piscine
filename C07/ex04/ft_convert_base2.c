/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:43:03 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/20 09:11:51 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_convert(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_int(int nb)
{
	int	result;

	result = 0;
	if (nb < 0)
	{
		nb *= (-1);
		result++;
	}
	while (nb % 10 != 0)
	{
		nb = nb / 10;
		result++;
	}
	return (result);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (i != j)
			{
				if (base[i] == base[j] || base[i] == '-' || base[i] == '+')
					return (1);
				else if (base[i] < 33 || base[i] == 127)
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

char	*ft_reverse(char	*str)
{
	int		i;
	int		len_str;
	char	tmp_char;

	i = 0;
	len_str = ft_strlen_convert(str) - 1;
	while (i <= (len_str) / 2)
	{
		tmp_char = str[i];
		str[i] = str[len_str - i];
		str[len_str - i] = tmp_char;
		i++;
	}
	str[len_str + 1] = '\0';
	return (str);
}
