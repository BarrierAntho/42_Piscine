/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:17:14 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/18 18:01:16 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen_join(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_all(int size, char **strs, char *sep)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (i < size)
	{
		result += ft_strlen_join(strs[i]);
		i++;
	}
	result += (size - 1) * ft_strlen_join(sep);
	return (result);
}

void	ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	len_dest = ft_strlen_join(dest);
	i = 0;
	while (src[i])
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len_all;
	int		i;

	if (size <= 0)
	{
		result = malloc(sizeof(*result));
		if (!result)
			return (0);
		return (result);
	}
	len_all = ft_strlen_all(size, strs, sep);
	result = malloc(sizeof(*result) * (len_all + 1));
	if (!result)
		return (0);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
