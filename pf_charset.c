#include "ft_printf.h"

void pf_charset(char *block, char c, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		block[i] = c;
		i++;
	}
	block[i] = '\0';
}
