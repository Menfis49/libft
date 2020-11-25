
#include "includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	if (!(element = malloc(sizeof(*element))))
		return (0);
	element->content = content;
	element->next = NULL;
	return element;
}
