#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == 0 || lst == 0)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}