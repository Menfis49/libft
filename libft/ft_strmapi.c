
#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*result;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (!(s))
		return (0);
	if (!(f))
		return (0);
	len = ft_strlen(s);
	if (!(result = malloc(sizeof(*result) * (len + 1))))
		return (0);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
