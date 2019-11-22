/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanboudr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:58:31 by yanboudr          #+#    #+#             */
/*   Updated: 2019/11/22 17:11:44 by yanboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((joined = (char*)malloc(sizeof(char)
					* (ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	joined = ft_strcpy(joined, s1);
	return (ft_strcat(joined, s2));
}
