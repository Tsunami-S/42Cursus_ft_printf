#include "ft_printf.h"

int main(void)
{
	int len;
	int ftlen;

	printf("---------------\nprintf\nft_printf\nlen : ftlen\n---------------\n\n");
	printf("percent--------\n");
	
	len = printf("%%%%%%%%%%%%\n");
	ftlen = ft_printf("%%%%%%%%%%%%\n");
	printf("%d : %d\n\n", len, ftlen);
	return 0;
}
