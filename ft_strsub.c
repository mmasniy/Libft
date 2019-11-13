
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (!s)
		return (NULL);
	newstr = ft_strnew(len);
	if (!newstr)
		return (NULL);
	newstr = ft_strncpy(newstr, &s[start], len);
	return (newstr);
}