
#include "includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (a > b)
		while (i < n)
		{
			a[n - 1] = b[n - 1];
			n--;
		}
	else
		while (i < n)
		{
			a[i] = b[i];
			i++;
		}
	return (dest);

}
