#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char *p;

	p = (char *)s;
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (*p == '\0' && c == '\0')
		return (p);
	return (NULL);
}