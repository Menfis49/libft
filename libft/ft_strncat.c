
#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t j;
	size_t i;

	j = 0;
	i = ft_strlen(s1);
	while ((s2[j] != '\0') && (j < n))
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
