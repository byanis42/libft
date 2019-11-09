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