/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanboudr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:50:47 by yanboudr          #+#    #+#             */
/*   Updated: 2019/11/22 17:01:02 by yanboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nb_len(int nb)
{
	int count;

	count = 0;
	while (nb)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	int		i;
	int		signe;
	char	*dest;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (!(dest = malloc(sizeof(char) * nb_len(n) + (n < 0 ? 2 : 1))))
		return (NULL);
	signe = (n < 0 ? 1 : 0);
	n = n * (n < 0 ? -1 : 1);
	while (n)
	{
		dest[i++] = n % 10 + 48;
		n = n / 10;
	}
	if (signe == 1)
		dest[i++] = '-';
	dest[i] = '\0';
	ft_strrev(dest);
	return (dest);
}
