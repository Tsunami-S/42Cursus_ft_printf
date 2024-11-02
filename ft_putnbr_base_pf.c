#include "ft_printf.h"
#include <stdio.h>

int	ft_putnbr_hex_pf(unsigned long nbr, char *base)
{
	int len;

	len = 0;
	if (nbr < 16)
		return ft_putchar_pf(base[nbr]);
	else
	{
		len += ft_putnbr_hex_pf(nbr / 16, base);
		len += ft_putchar_pf(base[nbr % 16]);
	}
	return len;
}
