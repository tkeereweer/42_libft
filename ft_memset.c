#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	char			*str;

	i = 0;
	str = (char *) b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}