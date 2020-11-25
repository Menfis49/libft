
#include "includes/libft.h"
#include <unistd.h>

void	test(int fd)
{
	write (fd, "0", 1);
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned long int	exp;
	unsigned int		temp;
	float				f;

	if (n < 0)
	{
		temp = -n;
		write(fd, "-", 1);
	}
	else
		temp = n;
	if (n == 0)
		test(fd);
	exp = 1;
	while (temp >= exp)
		exp *= 10;
	exp /= 10;
	while (exp >= 1)
	{
		f = temp / exp;
		ft_putchar_fd((long int)f + '0', fd);
		temp -= ((long int)f) * exp;
		exp /= 10;
	}
}
