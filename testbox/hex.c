#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("%%x     :[%x]\n", 42);
	printf("%% 5x   :[% 5x]\n", 42);
	printf("%%-5x   :[%-5x]\n", 42);
	printf("%%+5x   :[%+5x]\n", 42);
	printf("%%05x   :[%05x]\n", 42);
	printf("%%#5x   :[%#5x]\n", 42);
	printf("%%#05x  :[%#05x]\n", 42);
	printf("%%#-5x  :[%#-5x]\n", 42);
	printf("%%#05.4x:[%#05.4x]\n", 42);
	printf("%%#-5.4x:[%#-5.4x]\n", 42);
	printf("%%#05.4x:[%#05.4x]\n", 42);
	printf("%%#-5.4x:[%#-5.4x]\n", 42);
	printf("%%#010.4x:[%#010.4x]\n", 42);
	printf("%%#-10.4x:[%#-10.4x]\n", 42);
	printf("%%#05.2x:[%#05.2x]\n", 42);
	printf("%%#-5.2x:[%#-5.2x]\n", 42);
	printf("%%#05.x:[%#05.x]\n", 0);
	printf("%%#-5.x:[%#-5.x]\n", 0);
	printf("%%#x:[%#x]\n", 0);
	printf("%%#x:[%#x]\n", LONG_MIN);
	printf("%%#x:[%#x]\n", LONG_MAX);
	return 0;
}
