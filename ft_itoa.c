#include "libft.h"

static int nb_len(int n)
{
	int i;

	i = 0;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (n);
}

static char *convert_num(int n, int signe, char *dest)
{
	int i;

	i = 0;
	while (n)
	{
		dest[i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	if (signe == 1)
	{
		dest[i] = '-';
		i++;
	}
	dest[i] = '\0';
	ft_strrev(dest);
	return (dest);
}

char *ft_itoa(int n)
{
	char *dest;
	int signe;

	signe = 0;
	if (!(dest = malloc(sizeof(char) * nb_len(n) + n >= 0 ? 1 : 2)))
		return (NULL);
	if (n == -2147483648)
	{
		dest = "-2147483648";
		return (dest);
	}
	if (n == 0)
	{
		dest = "0";
		return (dest);
	}
	if (n < 0)
	{
		signe = 1;
		n = -n;
	}
	convert_num(n, signe, dest);
	return (dest);
}

#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(12356));
	printf("%s\n", ft_itoa(42));
	return (0);
}