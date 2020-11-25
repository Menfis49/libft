

#include "includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*sdest;
	unsigned char	*ssrc;

	i = 0;
	sdest = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	while (i < n)
	{
		sdest[i] = ssrc[i];
		if (ssrc[i] == (unsigned char)c)
			return ((void *)&sdest[i+1]);
		i++;
	}
	return (0);
}
