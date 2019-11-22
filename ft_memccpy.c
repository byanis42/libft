/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanboudr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:33:48 by yanboudr          #+#    #+#             */
/*   Updated: 2019/11/22 17:07:28 by yanboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*dest_pointer;

	i = 0;
	source = (unsigned char *)src;
	dest_pointer = (unsigned char *)dest;
	while (i < n)
	{
		dest_pointer[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
