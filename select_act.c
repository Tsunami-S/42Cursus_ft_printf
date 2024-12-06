#include "ft_printf.h"

int select_act(va_list ap, t_format *s)
{
	if(s->width == -1 || s->prec == -1)
		return -1;
	if(s->count == 1 || s->spec == '%')
		return pf_putchar('%', s);
	else if(s->spec == 'c')
		return pf_putchar(va_arg(ap, int), s);
	else if(s->spec == 's')
		return pf_putstr(va_arg(ap, char *), s);
	else if(s->spec == 'p')
		return pf_putaddr(va_arg(ap, void *), s);
	else if(s->spec == 'd' || s->spec == 'i')
		return pf_putnbr(va_arg(ap, int), s);
	else if(s->spec == 'u')
		return pf_putnbr_unsigned(va_arg(ap, unsigned int), s);
	else if(s->spec == 'x')
		return pf_putnbr_hex(va_arg(ap, unsigned int), "0123456789abcdef", s);
	else if(s->spec== 'X')
		return pf_putnbr_hex(va_arg(ap, unsigned int), "0123456789ABCDEF", s);
	return -2;
}
