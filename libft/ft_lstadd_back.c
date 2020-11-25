
#include "includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (alst == NULL || new == NULL)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}	
	last = ft_lstlast(*alst);
	new->next = last->next;
	last->next = new;
}
