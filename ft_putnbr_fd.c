#include "libft.h"

void    ft_putnbr_fd(int n, int fd);
{
	if (nb == -2147483648)
	{
		write (fd, "-", 1);
		write (fd, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putchar_fd (nb % 10 + '0');
	}
	else
	    ft_putchar_fd (nb + '0');
}
