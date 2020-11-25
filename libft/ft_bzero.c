
#include "includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *d;
	unsigned int i;

	i = 0;
	d = (unsigned char *)s;
	while (n > 0)
	{
		d[i] = '\0';
		i++;
		n--;
	}
}
