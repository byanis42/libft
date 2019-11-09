#include "libft.h"

static int	get_start(char const *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	return (i);
}

static int get_end(char const *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i--;
	}
	i++;
	return (i);
}

char *ft_strtrim(char const *s)
{
	int		len;
	char	*str_trimmed;

	if (s)
	{
		len = (get_end(s) - get_start(s));
		if (len <= 0)
		{
			str_trimmed = ft_stralloc(1);
			return (str_trimmed);
		}
		else
		{
			str_trimmed = ft_stralloc(len);
		}
		if (str_trimmed)
		{
			str_trimmed = ft_substr(s, get_start(s), len);
			return (str_trimmed);
		}
	}
	return (NULL);
}