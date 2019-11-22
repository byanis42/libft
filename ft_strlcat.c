/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanboudr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:59:09 by yanboudr          #+#    #+#             */
/*   Updated: 2019/11/22 17:06:10 by yanboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (dest[i] && size > 0)
	{
		size--;
		i++;
	}
	while (*src && size > 1)
	{
		dest[i++] = *src++;
		size--;
	}
	if (size > 0)
		dest[i] = '\0';
	while (*src++)
		i++;
	return (i);
}
