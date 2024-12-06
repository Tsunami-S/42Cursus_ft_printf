#include "ft_printf.h"

int main(void)
{
	int len;
	int ftlen;
	char *str = NULL;

	printf("---------------\nprintf\nft_printf\nlen : ftlen\n---------------\n\n");

	printf("------------------abcde-----------------\n");
	printf("        [123456789012345678901234567890]\n");
	len = printf("%%15.3s: [%15.3s]\n", "abcde");
	ftlen = ft_printf("%%15.3s: [%15.3s]\n", "abcde");
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%15.0s: [%15.0s]\n", "abcde");
	ftlen = ft_printf("%%15.0s: [%15.0s]\n", "abcde");
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%15.0s: [%15.0s]\n", "abcde");
	ftlen = ft_printf("%%15.0s: [%15.0s]\n", "abcde");
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%15.s : [%15.s]\n", "abcde");
	ftlen = ft_printf("%%15.s : [%15.s]\n", "abcde");
	printf("%d : %d\n\n", len, ftlen);

	printf("------------------NULL------------------\n");
	printf("        [123456789012345678901234567890]\n");
	len = printf("%%15.3s: [%15.3s]\n", str);
	ftlen = ft_printf("%%15.3s: [%15.3s]\n", str);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%15s  : [%15s]\n", str);
	ftlen = ft_printf("%%15s  : [%15s]\n", str);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.3s  : [%.3s]\n", str);
	ftlen = ft_printf("%%.3s  : [%.3s]\n", str);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%s    : [%s]\n", str);
	ftlen = ft_printf("%%s    : [%s]\n", str);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.09s : [%.09s]\n", str);
	ftlen = ft_printf("%%.09s : [%.09s]\n", str);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.04s : [%.04s]\n", str);
	ftlen = ft_printf("%%.04s : [%.04s]\n", str);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.06s : [%.06s]\n", str);
	ftlen = ft_printf("%%.06s : [%.06s]\n", str);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.07s : [%.07s]\n", str);
	ftlen = ft_printf("%%.07s : [%.07s]\n", str);
	printf("%d : %d\n\n", len, ftlen);

	return 0;
}
