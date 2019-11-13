
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen((char*)s);
	while (s[i] != c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char*)&s[i]);
}
