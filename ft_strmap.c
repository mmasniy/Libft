
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_mass;
	int		i;

	if (!s)
		return (NULL);
	new_mass = ft_strnew(ft_strlen((char*)s));
	if (!new_mass)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_mass[i] = f(s[i]);
		i++;
	}
	new_mass[i] = '\0';
	return (new_mass);
}