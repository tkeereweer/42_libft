#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int 	i;
	char	*out;

	i = 0;
	out = (void *) 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			out = &s[i];
		i++;
	}
	if (s[i] == c)
		out = &s[i];
	return (out);
}