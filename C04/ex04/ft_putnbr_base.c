/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:33:26 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/13 18:04:38 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar04(char c);
int		ft_strlen04(char *str);
int		ft_check_base(char *str);
void	ft_putnbr_rec(unsigned int nbr, char *base);

void	ft_putchar04(char c)
{
	write(1, &c, 1);
}

int	ft_strlen04(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[j])
		{
			if (i != j && (str[i] == str[j] || str[i] == '-' || str[i] == '+' ))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_rec(unsigned int n, char *base)
{	
	int	len_base;

	len_base = ft_strlen04(base);
	if (n / len_base < 1)
	{
		ft_putchar04(base[n % len_base]);
	}
	else
	{
		ft_putnbr_rec(n / len_base, base);
		ft_putnbr_rec(n % len_base, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len_base;
	unsigned int	un_nbr;

	len_base = ft_strlen04(base);
	if (*base != 0 && len_base > 1 && ft_check_base(base) == 0)
	{
		if (nbr < 0)
		{
			ft_putchar04('-');
			un_nbr = -nbr;
		}
		else
		{
			un_nbr = nbr;
		}
		ft_putnbr_rec(un_nbr, base);
	}
}
