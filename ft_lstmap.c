
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*firstadress;

	if (!lst || !f)
		return (NULL);
	newlst = f(lst);
	firstadress = newlst;
	while (lst->next)
	{
		lst = lst->next;
		if (!(newlst->next = f(lst)))
		{
			free(newlst->next);
			return (NULL);
		}
		newlst = newlst->next;
	}
	return (firstadress);
}
