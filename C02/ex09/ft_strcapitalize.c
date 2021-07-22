/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:58:15 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/07 15:14:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 0;
	if (*str >= '0' && *str <= '9')
		is_alpha = 1;
	else if (*str >= 'a' && *str <= 'z')
		is_alpha = 1;
	else if (*str >= 'A' && *str <= 'Z')
		is_alpha = 1;
	return (is_alpha);
}

int	ft_low(char *str)
{
	int	is_low;

	is_low = 0;
	if (*str >= 'a' && *str <= 'z')
		is_low = 1;
	return (is_low);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (i == 0 && ft_low(&str[i]) == 1)
			str[i] = str[i] - ('a' - 'A');
		else if (i > 0 && ft_alpha(&str[i - 1]) == 0 && ft_low(&str[i]) == 1)
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
