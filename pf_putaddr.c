#include "ft_printf.h"

int pf_putaddr(void *addr, char *base, t_format *s)
{
	int i;
	int write_len1;
	int write_len2;
	unsigned long long hex_addr;
	char hex_str[21];

	if(!addr)
		return(pf_putstr("(nil)", s));
	hex_addr = (unsigned long long)addr;
	write_len1 = pf_putstr("0x", s);
	if(write_len1 == -1)
		return -1;
	i = 0;
	while(hex_addr)
	{
		hex_str[i] = base[hex_addr % 16];
		i++;
		hex_addr /= 16;
	}
	hex_str[i] = '\0';
	reverse_str(hex_str);
	write_len2 = pf_putstr(hex_str, s);	
	if(write_len2 == -1)
		return -1;
	return write_len1 + write_len2;
}
