#include "ft_printf.h"

int select_act(va_list ap, char *str, int count)
{
	char c;

	c = str + count - 1;
	if(c == 'c')
		return (ft_putchar_pf(va_arg(ap, int)));
	else if(c == 's')
		return (ft_putstr_pf(va_arg(ap, char *)));
	else if(c == 'p')
		return (ft_putaddr_pf(va_arg(ap, void *)));
	else if(c == 'd' || c == 'i')
		return (ft_putnbr_pf(va_arg(ap, int)));
	else if(c == 'u')
		return (ft_putnbr_pf(va_arg(ap, unsigned int)));
	else if(c == 'x')
		return (ft_putnbr_hex_pf(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if(c == 'X')
		return (ft_putnbr_hex_pf(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if(c == '%')
		return (ft_putchar_pf(c));
	return -1;
}
