#include "libft.h"

static	int	ft_checkj(char const *s)
{
	int		j;

	j = ft_strlen((char *)s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	return (j);
}

static	int	ft_checki(char const *s)
{
	int		i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	char	*newstr;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (0);
	i = ft_checki(s);
	k = 0;
	j = ft_checkj(s);
	if (i > j + 1)
		i = j;
	newstr = ft_strnew(j - i + 1);
	if (!newstr)
		return (0);
	if (!s[i] || !s[j] || i >= j)
		return (newstr);
	while (i <= j)
	{
		newstr[k] = s[i];
		i++;
		k++;
	}
	newstr[k] = '\0';
	return (newstr);
}
