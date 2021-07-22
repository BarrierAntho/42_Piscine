/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:18:42 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/16 10:02:38 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char **txt1, char **txt2)
{
	char	*tmp;

	tmp = *txt1;
	*txt1 = *txt2;
	*txt2 = tmp;
}

int	ft_check_order(char *txt1, char *txt2)
{
	int	i;

	i = 0;
	while (txt1[i] && txt1[i] == txt2[i])
		i++;
	if (txt1[i] > txt2[i])
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_check_order(argv[i], argv[i + 1]) == 1)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				i = 1;
			}
			else
				i++;
		}
		i = 1;
		while (i < argc)
		{
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
