
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlist;

	if (!(newlist = (t_list*)malloc(sizeof(*newlist))))
		return (NULL);
	if (!content)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	else
	{
		if (!(newlist->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(newlist->content, content,  content_size);
		newlist->content_size = content_size;
	}
	newlist->next = NULL;
	return (newlist);
}