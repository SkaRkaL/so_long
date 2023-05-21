#include "so_long.h"

void	ft_putnbr(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	nb = n;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
}
