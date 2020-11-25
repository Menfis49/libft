
#include "includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)src;
	tmp2 = (unsigned char *)dest;
	while (n > 0)
	{
		*tmp2++ = *tmp1++;
		n--;
	}
	return (dest);
}
