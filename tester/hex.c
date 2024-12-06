#include "ft_printf.h"

int main(void)
{
	int len;
	int ftlen;

	printf("---------------\nprintf\nft_printf\nlen : ftlen\n---------------\n\n");
	printf("hex-42-----------------------\n");
	printf("        [12345678901234567890]\n");
	
	len = printf("%%x     :[%x]\n", 42);
	ftlen = ft_printf("%%x     :[%x]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-5x   :[%-5x]\n", 42);
	ftlen = ft_printf("%%-5x   :[%-5x]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%05x   :[%05x]\n", 42);
	ftlen = ft_printf("%%05x   :[%05x]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%#5x   :[%#5x]\n", 42);
	ftlen = ft_printf("%%#5x   :[%#5x]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%#05x  :[%#05x]\n", 42);
	ftlen = ft_printf("%%#05x  :[%#05x]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%#-5x  :[%#-5x]\n", 42);
	ftlen = ft_printf("%%#-5x  :[%#-5x]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%#-5.4x:[%#-5.4x]\n", 42);
	ftlen = ft_printf("%%#-5.4x:[%#-5.4x]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%#-5.4x:[%#-5.4x]\n", 42);
	ftlen = ft_printf("%%#-5.4x:[%#-5.4x]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%#-10.4x:[%#-10.4x]\n", 42);
	ftlen = ft_printf("%%#-10.4x:[%#-10.4x]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%#-5.2x:[%#-5.2x]\n", 42);
	ftlen = ft_printf("%%#-5.2x:[%#-5.2x]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%#-5.x:[%#-5.x]\n", 0);
	ftlen = ft_printf("%%#-5.x:[%#-5.x]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%#x:[%#x]\n", 0);
	ftlen = ft_printf("%%#x:[%#x]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	return 0;
}
