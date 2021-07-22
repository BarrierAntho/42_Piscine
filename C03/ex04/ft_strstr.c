/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 08:46:47 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/08 17:26:23 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen041(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_cmp_str(char *txt1, char *txt2, int i_pos)
{
	int	i;

	i = 0;
	if (ft_strlen041(&txt1[i_pos]) < ft_strlen041(txt2))
	{
		return (0);
	}
	while (txt2[i] != '\0')
	{
		if (txt1[i_pos] != txt2[i])
		{
			return (0);
		}
		i_pos++;
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	if (*to_find == 0)
	{
		return (str);
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_cmp_str(str, to_find, i) == 1)
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
