/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanboudr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:16:55 by yanboudr          #+#    #+#             */
/*   Updated: 2019/11/21 15:54:58 by yanboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (b);
}
