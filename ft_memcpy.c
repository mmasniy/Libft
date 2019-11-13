#include "libft.h"

void		*ft_memcpy (void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*new_dst;
	unsigned char	*new_src;

	new_dst = (unsigned char*)dst;
	new_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		i++;
	}// you have to write this expression "dst = new_dst" if your programm didnt compile
	return (new_dst);
}
