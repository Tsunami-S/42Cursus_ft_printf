#include "ft_printf.h"

int main(void)
{
	int len;
	int ftlen;

	printf("---------------\nprintf\nft_printf\nlen : ftlen\n---------------\n\n");

	printf("width----------------------------------\n");
	len = printf("%%d       :[%d]\n", 42);
	ftlen = ft_printf("%%d       :[%d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%d       :[%d]\n", 42000);
	ftlen = ft_printf("%%d       :[%d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%010d    :[%010d]\n", 42);
	ftlen = ft_printf("%%010d    :[%010d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%010d    :[%010d]\n", 42000);
	ftlen = ft_printf("%%010d    :[%010d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10d    :[%-10d]\n", 42);
	ftlen = ft_printf("%%-10d    :[%-10d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10d    :[%-10d]\n", 42000);
	ftlen = ft_printf("%%-10d    :[%-10d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+10d    :[%+10d]\n", 42);
	ftlen = ft_printf("%%+10d    :[%+10d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+10d    :[%+10d]\n", 42000);
	ftlen = ft_printf("%%+10d    :[%+10d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 10d    :[% 10d]\n", 42);
	ftlen = ft_printf("%% 10d    :[% 10d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 10d    :[% 10d]\n", 42000);
	ftlen = ft_printf("%% 10d    :[% 10d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+010d   :[%+010d]\n", 42);
	ftlen = ft_printf("%%+010d   :[%+010d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+010d   :[%+010d]\n", 42000);
	ftlen = ft_printf("%%+010d   :[%+010d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 010d   :[% 010d]\n", 42);
	ftlen = ft_printf("%% 010d   :[% 010d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 010d   :[% 010d]\n", 42000);
	ftlen = ft_printf("%% 010d   :[% 010d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-+10d   :[%-+10d]\n", 42);
	ftlen = ft_printf("%%-+10d   :[%-+10d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-+10d   :[%-+10d]\n", 42000);
	ftlen = ft_printf("%%-+10d   :[%-+10d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%- 10d   :[%- 10d]\n", 42);
	ftlen = ft_printf("%%- 10d   :[%- 10d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%- 10d   :[%- 10d]\n", 42000);
	ftlen = ft_printf("%%- 10d   :[%- 10d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	printf("prec----------------------------------\n");
	len = printf("%%.4d     :[%.4d]\n", 42);
	ftlen = ft_printf("%%.4d     :[%.4d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.4d     :[%.4d]\n", 42000);
	ftlen = ft_printf("%%.4d     :[%.4d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4d  :[%-10.4d]\n", 42);
	ftlen = ft_printf("%%-10.4d  :[%-10.4d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4d  :[%-10.4d]\n", 42000);
	ftlen = ft_printf("%%-10.4d  :[%-10.4d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 10.4d  :[% 10.4d]\n", 42);
	ftlen = ft_printf("%% 10.4d  :[% 10.4d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 10.4d  :[% 10.4d]\n", 42000);
	ftlen = ft_printf("%% 10.4d  :[% 10.4d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+10.4d  :[%+10.4d]\n", 42);
	ftlen = ft_printf("%%+10.4d  :[%+10.4d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+10.4d  :[%+10.4d]\n", 42000);
	ftlen = ft_printf("%%+10.4d  :[%+10.4d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4d  :[%-10.4d]\n", 42);
	ftlen = ft_printf("%%-10.4d  :[%-10.4d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4d  :[%-10.4d]\n", 42000);
	ftlen = ft_printf("%%-10.4d  :[%-10.4d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 4.4d   :[% 4.4d]\n", 42);
	ftlen = ft_printf("%% 4.4d   :[% 4.4d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 4.4d   :[% 4.4d]\n", 42000);
	ftlen = ft_printf("%% 4.4d   :[% 4.4d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+4.4d   :[%+4.4d]\n", 42);
	ftlen = ft_printf("%%+4.4d   :[%+4.4d]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+4.4d   :[%+4.4d]\n", 42000);
	ftlen = ft_printf("%%+4.4d   :[%+4.4d]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	return 0;
}
