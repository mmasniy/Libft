#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s01;
	unsigned char 	*s02;
	size_t	i;

	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	i = -1;
	while (++i < n && s01[i] == s02[i])
		;
	if (i == n)
		return (0);
	return (s01[i] - s02[i]);
}
