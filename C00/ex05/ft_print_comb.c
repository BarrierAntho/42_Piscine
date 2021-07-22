/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 08:45:59 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/03 15:27:56 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check_result(char a, char b, char c);
void	ft_print_comb(void);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_result(char a, char b, char c)
{
	if (!(a == b || a == c || b == c) && !(a > b) && !(a < b && b > c))
	{
		ft_putchar(a + '0');
		ft_putchar(b + '0');
		ft_putchar(c + '0');
		if (a == 7 && b == 8 && c == 9)
		{
		}
		else
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				ft_check_result(a, b, c);
				c++;
			}
			b++;
			c = 0;
		}
		a++;
		b = 0;
	}
}
