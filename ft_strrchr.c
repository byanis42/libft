#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		count;

	i = 0;
	count = -1;
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count = i;
		}
		i++;
	}
	if (count == -1)
		return (0);
	else
		return ((char *)&s[count]);
}