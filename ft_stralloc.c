/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stralloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanboudr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:56:42 by yanboudr          #+#    #+#             */
/*   Updated: 2019/11/21 15:56:46 by yanboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stralloc(size_t size)
{
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(*str) * (1));
		if (str)
		{
			ft_memset(str, '\0', (1));
			return (str);
		}
	}
	else if (size)
	{
		str = malloc(sizeof(*str) * (size + 1));
		if (str)
		{
			ft_memset(str, '\0', (size + 1));
			return (str);
		}
	}
	return (NULL);
}
