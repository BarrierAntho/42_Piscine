/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 16:17:24 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/22 15:00:40 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_nb_word(char *str, char *charset)
{
	int	counter;
	int	i;
	int	is_word;

	counter = 0;
	i = 0;
	is_word = 0;
	while (str[i])
	{
		if (ft_is_charset(str[i], charset) == 0)
		{
			if (is_word == 0)
			{
				is_word = 1;
				counter++;
			}
		}
		else
			is_word = 0;
		i++;
	}
	return (counter);
}

int	ft_nb_letter(char *str, char *charset)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
	{
		counter++;
		i++;
	}
	return (counter);
}

void	ft_strdup(char *str, char *tab, int len_word)
{
	int	i;

	i = 0;
	while (i < len_word)
	{
		tab[i] = *str;
		i++;
		str++;
	}
	tab[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nb_word;
	int		i;

	nb_word = ft_nb_word(str, charset);
	if (nb_word == 0)
		return (0);
	tab = malloc(sizeof(**tab) * (nb_word + 1));
	if (!tab)
		return (0);
	i = 0;
	while (*str)
	{
		if (ft_is_charset(*str, charset) == 0)
		{
			tab[i] = malloc(sizeof(char *) * (ft_nb_letter(str, charset) + 1));
			ft_strdup(str, tab[i], ft_nb_letter(str, charset));
			str += ft_nb_letter(str, charset);
			i++;
		}
		else
			str++;
	}
	tab[i] = 0;
	return (tab);
}
