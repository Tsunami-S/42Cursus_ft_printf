#include "ft_printf.h"

int main(void)
{
	int len;
	int ftlen;

	printf("---------------\nprintf\nft_printf\nlen : ftlen\n---------------\n\n");

	printf("zero----------------------------------\n");
	len = printf("%%d       :[%d]\n", 0);
	ftlen = ft_printf("%%d       :[%d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%d       :[%d]\n", 0);
	ftlen = ft_printf("%%d       :[%d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%010d    :[%010d]\n", 0);
	ftlen = ft_printf("%%010d    :[%010d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%010d    :[%010d]\n", 0);
	ftlen = ft_printf("%%010d    :[%010d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10d    :[%-10d]\n", 0);
	ftlen = ft_printf("%%-10d    :[%-10d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10d    :[%-10d]\n", 0);
	ftlen = ft_printf("%%-10d    :[%-10d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+10d    :[%+10d]\n", 0);
	ftlen = ft_printf("%%+10d    :[%+10d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+10d    :[%+10d]\n", 0);
	ftlen = ft_printf("%%+10d    :[%+10d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 10d    :[% 10d]\n", 0);
	ftlen = ft_printf("%% 10d    :[% 10d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 10d    :[% 10d]\n", 0);
	ftlen = ft_printf("%% 10d    :[% 10d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+010d   :[%+010d]\n", 0);
	ftlen = ft_printf("%%+010d   :[%+010d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+010d   :[%+010d]\n", 0);
	ftlen = ft_printf("%%+010d   :[%+010d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 010d   :[% 010d]\n", 0);
	ftlen = ft_printf("%% 010d   :[% 010d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 010d   :[% 010d]\n", 0);
	ftlen = ft_printf("%% 010d   :[% 010d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-+10d   :[%-+10d]\n", 0);
	ftlen = ft_printf("%%-+10d   :[%-+10d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-+10d   :[%-+10d]\n", 0);
	ftlen = ft_printf("%%-+10d   :[%-+10d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%- 10d   :[%- 10d]\n", 0);
	ftlen = ft_printf("%%- 10d   :[%- 10d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%- 10d   :[%- 10d]\n", 0);
	ftlen = ft_printf("%%- 10d   :[%- 10d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	printf("prec-zero-----------------------------\n");
	len = printf("%%.4d       :[%.4d]\n", 0);
	ftlen = ft_printf("%%.4d       :[%.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.4d       :[%.4d]\n", 0);
	ftlen = ft_printf("%%.4d       :[%.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4d    :[%-10.4d]\n", 0);
	ftlen = ft_printf("%%-10.4d    :[%-10.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4d    :[%-10.4d]\n", 0);
	ftlen = ft_printf("%%-10.4d    :[%-10.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+10.4d    :[%+10.4d]\n", 0);
	ftlen = ft_printf("%%+10.4d    :[%+10.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+10.4d    :[%+10.4d]\n", 0);
	ftlen = ft_printf("%%+10.4d    :[%+10.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 10.4d    :[% 10.4d]\n", 0);
	ftlen = ft_printf("%% 10.4d    :[% 10.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 10.4d    :[% 10.4d]\n", 0);
	ftlen = ft_printf("%% 10.4d    :[% 10.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-+10.4d   :[%-+10.4d]\n", 0);
	ftlen = ft_printf("%%-+10.4d   :[%-+10.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-+10.4d   :[%-+10.4d]\n", 0);
	ftlen = ft_printf("%%-+10.4d   :[%-+10.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%- 10.4d   :[%- 10.4d]\n", 0);
	ftlen = ft_printf("%%- 10.4d   :[%- 10.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%- 10.4d   :[%- 10.4d]\n", 0);
	ftlen = ft_printf("%%- 10.4d   :[%- 10.4d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%- 10.d    :[%- 10.d]\n", 0);
	ftlen = ft_printf("%%- 10.d    :[%- 10.d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%- 10.0d   :[%- 10.0d]\n", 0);
	ftlen = ft_printf("%%- 10.0d   :[%- 10.0d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-+.d      :[%-+.d]\n", 0);
	ftlen = ft_printf("%%-+.d      :[%-+.d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-+.0d     :[%-+.0d]\n", 0);
	ftlen = ft_printf("%%-+.0d     :[%-+.0d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%- .d      :[%- .d]\n", 0);
	ftlen = ft_printf("%%- .d      :[%- .d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%- .0d     :[%- .0d]\n", 0);
	ftlen = ft_printf("%%- .0d     :[%- .0d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+1.d      :[%+1.d]\n", 0);
	ftlen = ft_printf("%%+1.d      :[%+1.d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+1.0d     :[%+1.0d]\n", 0);
	ftlen = ft_printf("%%+1.0d     :[%+1.0d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 1.d      :[% 1.d]\n", 0);
	ftlen = ft_printf("%% 1.d      :[% 1.d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% 1.0d     :[% 1.0d]\n", 0);
	ftlen = ft_printf("%% 1.0d     :[% 1.0d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+.d       :[%+.d]\n", 0);
	ftlen = ft_printf("%%+.d       :[%+.d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%+.0d      :[%+.0d]\n", 0);
	ftlen = ft_printf("%%+.0d      :[%+.0d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% .d       :[% .d]\n", 0);
	ftlen = ft_printf("%% .d       :[% .d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%% .0d      :[% .0d]\n", 0);
	ftlen = ft_printf("%% .0d      :[% .0d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.d        :[%.d]\n", 0);
	ftlen = ft_printf("%%.d        :[%.d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.0d       :[%.0d]\n", 0);
	ftlen = ft_printf("%%.0d       :[%.0d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-.d       :[%-.d]\n", 0);
	ftlen = ft_printf("%%-.d       :[%-.d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-.0d      :[%-.0d]\n", 0);
	ftlen = ft_printf("%%-.0d      :[%-.0d]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	return 0;
}
