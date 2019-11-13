
#include "libft.h"
 
void		*ft_memalloc(size_t size)
{
	unsigned char	*ch;
	size_t			i;

	i = 0;
	if (!(ch = (unsigned char *)malloc(size)))
		return (NULL);
	else
		while (size > i)
		{
			ch[i] = '\0';
			i++;
		}
	return ((void *)ch);
}
