
#include "includes/libft.h"

char	*ft_strdup(const char *s)
{
	int i;
	size_t size;
	char *result;

	i = 0;
	size = 0;
	size = ft_strlen(s);
	if (!(result = malloc(sizeof(*result) * (size + 1))))
		return (0);
	while (s[i] != '\0')
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
