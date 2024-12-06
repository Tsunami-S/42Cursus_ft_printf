#include "ft_printf.h"

int main(void)
{
	int len;
	int ftlen;

	printf("---------------\nprintf\nft_printf\nlen : ftlen\n---------------\n\n");
	printf("char-c = 'a'----------------\n");
	printf("      [12345678901234567890]\n");
	
	len = printf("%%c   : [%c]\n", 'a');
	ftlen = ft_printf("%%c   : [%c]\n", 'a');
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%4c  : [%4c]\n", 'a');
	ftlen = ft_printf("%%4c  : [%4c]\n", 'a');
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-4c : [%-4c]\n", 'a');
	ftlen = ft_printf("%%-4c : [%-4c]\n", 'a');
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-c  : [%-c]\n", 'a');
	ftlen = ft_printf("%%-c  : [%-c]\n", 'a');
	printf("%d : %d\n\n", len, ftlen);

	printf("char-c = 0------------------\n");
	printf("      [1234567890]\n");

	len = printf("%%4c : [%4c]\n", 0);
	ftlen = ft_printf("%%4c : [%4c]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	printf("      [1234567890]\n");
	len = printf("%%-1c: [%-1c]\n", 0);
	ftlen = ft_printf("%%-1c: [%-1c]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	printf("      [1234567890]\n");
	len = printf("%%-2c: [%-2c]\n", 0);
	ftlen = ft_printf("%%-2c: [%-2c]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	printf("      [1234567890]\n");
	len = printf("%%-3c: [%-3c]\n", 0);
	ftlen = ft_printf("%%-3c: [%-3c]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	return 0;
}
