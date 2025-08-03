#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	char			*str;

	i = 0;
	str = (char *) s;
	if (n == 0)
		return ;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}