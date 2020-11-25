
#include "includes/libft.h"

size_t	ft_strlcat(char *dst,const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i])
		i++;
	k = i;
	while (src[j] && j + i < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j < size)
		dst[i + j] = '\0';
	if (size < k)
		return (ft_strlen(src) + size);
	return (k + ft_strlen(src));
}
