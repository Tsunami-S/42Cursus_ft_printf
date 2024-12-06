#include <stdio.h>

int main(void)
{
	 char *str1 = "abcde";
	 char *str2 = NULL;

	 printf("addr-------------------------\n");
	 printf("%%p        :[123456789012345678901234567890]\n", str1);
	 printf("%%p        :[%p]\n", str1);
	 printf("%%20p      :[%20p]\n", str1);
	 printf("%%#20p     :[%#20p]\n", str1);
	 printf("%%020p     :[%020p]\n", str1);
	 printf("%%-20p     :[%-20p]\n", str1);
	 printf("%% 20p     :[% 20p]\n", str1);
	 printf("%%+20p     :[%+20p]\n", str1);
	 printf("%%0+20p    :[%0+20p]\n", str1);
	 printf("%%-+20p    :[%-+20p]\n", str1);
	 printf("%%0 20p    :[%0 20p]\n", str1);
	 printf("%%- 20p    :[%- 20p]\n", str1);
	 printf("%%#0+20p   :[%#0+20p]\n", str1);
	 printf("%%#-+20p   :[%#-+20p]\n", str1);
	 printf("%%#0 20p   :[%#0 20p]\n", str1);
	 printf("%%#- 20p   :[%#- 20p]\n", str1);
	 printf("%%20.15p   :[%20.15p]\n", str1);
	 printf("%%20.15p   :[%20.15p]\n", str1);
	 printf("%%#20.15p  :[%#20.15p]\n", str1);
	 printf("%%020.15p  :[%020.15p]\n", str1);
	 printf("%%-20.15p  :[%-20.15p]\n", str1);
	 printf("%% 20.15p  :[% 20.15p]\n", str1);
	 printf("%%+20.15p  :[%+20.15p]\n", str1);
	 printf("%%0+20.15p :[%0+20.15p]\n", str1);
	 printf("%%-+20.15p :[%-+20.15p]\n", str1);
	 printf("%%0 20.15p :[%0 20.15p]\n", str1);
	 printf("%%- 20.15p :[%- 20.15p]\n", str1);
	 printf("%%#0+20.15p:[%#0+20.15p]\n", str1);
	 printf("%%#-+20.15p:[%#-+20.15p]\n", str1);
	 printf("%%#0 20.15p:[%#0 20.15p]\n", str1);
	 printf("%%#- 20.15p:[%#- 20.15p]\n", str1);
	 return 0;
}	
