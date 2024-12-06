#include "ft_printf.h"

int main(void)
{
	 int len;
	 int ftlen;
	 char *str1 = "abcde";
	 char *str2 = NULL;

	 
	 printf("---------------\nprintf\nft_printf\nlen : ftlen\n---------------\n\n");
	 printf("addr---------------------------------------\n");
	 printf("      [123456789012345678901234567890]\n");

	 len = printf("%%p   :[%p]\n", str1);
	 ftlen = ft_printf("%%p   :[%p]\n", str1);
	 printf("%d : %d\n\n", len, ftlen);

	 len = printf("%%20p :[%20p]\n", str1);
	 ftlen = ft_printf("%%20p :[%20p]\n", str1);
	 printf("%d : %d\n\n", len, ftlen);

	 len = printf("%%-20p:[%-20p]\n", str1);
	 ftlen = ft_printf("%%-20p:[%-20p]\n", str1);
	 printf("%d : %d\n\n", len, ftlen);
	 
	 printf("NULL---------------------------------------\n");
	 printf("      [123456789012345678901234567890]\n");

	 len = printf("%%p   :[%p]\n", str2);
	 ftlen = ft_printf("%%p   :[%p]\n", str2);
	 printf("%d : %d\n\n", len, ftlen);

	 len = printf("%%20p :[%20p]\n", str2);
	 ftlen = ft_printf("%%20p :[%20p]\n", str2);
	 printf("%d : %d\n\n", len, ftlen);

	 len = printf("%%-20p:[%-20p]\n", str2);
	 ftlen = ft_printf("%%-20p:[%-20p]\n", str2);
	 printf("%d : %d\n\n", len, ftlen);

	 return 0;
}	
