#include "ft_printf.h"

int ft_putaddr_pf(void *addr)
{
	int len;
	unsigned long _addr;

	if(!addr)
		return(ft_putstr_pf("(nil)"));
	_addr = (unsigned long)addr;
	len = ft_putstr_pf("0x");
	len += ft_putnbr_hex_pf(_addr, "0123456789abcdef");	
	return len;
}
