#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	x;

	p = (unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (p[i] == x)
			return (p + i);
			i++;
	}
	return (NULL);
}