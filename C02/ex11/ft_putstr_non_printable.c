/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:22:44 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/07 15:49:07 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_hex(unsigned char c)
{
	unsigned const char	str_hex[] = "0123456789abcdef";

	ft_putchar(str_hex[c / 16]);
	ft_putchar(str_hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	x;

	i = 0;
	while (str[i])
	{
		x = (unsigned char) str[i];
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
		{
			ft_putchar('\\');
			ft_convert_hex(x);
		}
		else
		{
			ft_putchar(x);
		}
		i++;
	}
}
