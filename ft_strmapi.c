#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;

	out = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (out == (void *) 0)
		return (out);
	i = 0;
	while (s[i] != '\0')
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
