
#include "includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*dest;
	unsigned int	total;
	unsigned int	i;

	total = nmemb * size;
	if (!(dest = malloc(total)))
		return (0);
	i = 0;
	while (total--)
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}
