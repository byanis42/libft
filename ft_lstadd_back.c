#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*elem;

	if (alst == NULL)
		return ;
	elem = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (elem->next)
			elem = elem->next;
		elem->next = new;
	}
}
