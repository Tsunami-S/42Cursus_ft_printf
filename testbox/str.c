#include <stdio.h>

int main(void)
{
	char *str = NULL;
	printf("------------------abcde-----------------\n");
	printf("        [123456789012345678901234567890]\n");
	printf("%%15.3s: [%15.3s]\n", "abcde");
	printf("%%15.7s: [%15.7s]\n", "abcde");
	printf("%%15.0s: [%15.0s]\n", "abcde");
	printf("%%15.s : [%15.s]\n", "abcde");
	printf("------------------NULL------------------\n");
	printf("        [123456789012345678901234567890]\n");
	printf("%%15.3s: [%15.3s]\n", str);
	printf("%%15s  : [%15s]\n", str);
	printf("%%.3s  : [%.3s]\n", str);
	printf("%%s    : [%s]\n", str);
	printf("%%.09s : [%.09s]\n", str);
	printf("%%.04s : [%.04s]\n", str);
	printf("%%.06s : [%.06s]\n", str);
	printf("%%.07s : [%.07s]\n", str);
	return 0;
}
