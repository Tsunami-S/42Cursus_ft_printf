#include "ft_printf.h"

int	ft_putnbr_pf(long nbr)
{
	int len;

	len = 0;
	if(nbr < 0)
	{
		len += ft_putchar_pf('-');
		nbr = -nbr;
	}
	if (nbr < 10)
		len += ft_putchar_pf(nbr + '0');
	else
	{
		len += ft_putnbr_pf(nbr / 10);
		len += ft_putchar_pf(nbr % 10 + '0');
	}
	return len;
}
