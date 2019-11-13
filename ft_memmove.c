#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*new_dst;
	unsigned char 	*new_src;
	
	new_dst = (unsigned char*)dst;
	new_src = (unsigned char*)src;
	i = 0;
	if (new_dst > new_src)
        while ((int)--len >= 0)
            new_dst[len] = new_src[len];
    else
        while (i < len)
        {
            new_dst[i] = new_src[i];
            ++i;
        }
    return (new_dst);
}
