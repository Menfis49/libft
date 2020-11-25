
#include "includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int count;

	count = 0;
	if (!(src) || !(dst))
		return (0);
	if (size > 0)
	{
		while (--size && src[count])
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	while (src[count])
		count++;
	return (count);
}
