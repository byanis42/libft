/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanboudr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:49:07 by yanboudr          #+#    #+#             */
/*   Updated: 2019/11/26 16:09:48 by yanboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char			*cpy_src;
	unsigned char			*cpy_dst;
	size_t					i;

	if (src == dst)
		return (dst);
	cpy_src = (unsigned char *)src;
	cpy_dst = (unsigned char *)dst;
	if (src < dst)
	{
		i = n;
		while (i-- > 0)
			cpy_dst[i] = cpy_src[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			cpy_dst[i] = cpy_src[i];
			i++;
		}
	}
	return (dst);
}
