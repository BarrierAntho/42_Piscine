/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:41:37 by abarrier          #+#    #+#             */
/*   Updated: 2021/07/12 08:19:28 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen03(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	len_dest;
	int	i;
	int	j;

	len_dest = ft_strlen03(dest);
	i = 0;
	j = len_dest;
	while (nb > 0 && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
		nb--;
	}
	dest[j] = '\0';
	return (dest);
}
