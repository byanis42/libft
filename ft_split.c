/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanboudr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:55:57 by yanboudr          #+#    #+#             */
/*   Updated: 2019/11/21 16:29:50 by yanboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_isspace(char c, char tocheck)
{
	return (c == tocheck);
}

static int		count_words(char const *str, char c)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str, c))
			str++;
		if (*str && !ft_isspace(*str, c))
		{
			count++;
			while (*str && !ft_isspace(*str, c))
				str++;
		}
	}
	return (count);
}

static char		*malloc_word(char const *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !ft_isspace(str[i], c))
		i++;
	if (!(word = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && !ft_isspace(str[i], c))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	if (!s)
		return (NULL);
	if (!(arr = malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && ft_isspace(*s, c))
			s++;
		if (*s && !ft_isspace(*s, c))
		{
			arr[i] = malloc_word(s, c);
			i++;
			while (*s && !ft_isspace(*s, c))
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
