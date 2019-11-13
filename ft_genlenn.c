
#include "libft.h"

size_t		ft_genlenn(int n)
{
	int	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}
