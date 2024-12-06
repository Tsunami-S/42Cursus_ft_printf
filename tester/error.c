#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int len;
	int ftlen;

	printf("ERROR-----------------------------------\n");
	printf("<width_overflow>\n[%%+22222222222222222d]\n[");
	len = printf("%+22222222222222222d", 42);
	printf("]\nprintf   : %d\n[", len);
	ftlen = ft_printf("%+22222222222222222d", 42);
	printf("]\nft_printf: %d\n\n", ftlen);

	printf("<prec_with_plus>\n[%%.+11d]\n[");
	len = printf("%.+11d", 42);
	printf("]\nprintf   : %d\n[", len);
	ftlen = ft_printf("%.+11d", 42);
	printf("]\nft_printf: %d\n\n", ftlen);
	
	printf("<prec_with_minus>\n[%%.-11d]\n[");
	len = printf("%.011d", 42);
	printf("]\nprintf   : %d\n[", len);
	ftlen = ft_printf("%.011d", 42);
	printf("]\nft_printf: %d\n\n", ftlen);
	
	printf("<no_param>\n[%%d]\n[");
	len = printf("%d");
	printf("]\nprintf   : %d\n[", len);
	ftlen = ft_printf("%d");
	printf("]\nft_printf: %d\n\n", ftlen);
	return 0;
}
