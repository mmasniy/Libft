#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new_mass;
	int				i;
	unsigned char	new_c;

	new_mass = (unsigned char*)s;
	new_c = (char)c;
	i = 0;
	while (n > 0)
	{
		if (new_mass[i] == new_c)
			return (&new_mass[i]);
		n--;
		i++;
	}
	return (NULL);
}


int main(void) {
	
	char *s;

	s = mx_memrchr("Trinity", 'i', 7);
	printf("%s\n", s);
}

