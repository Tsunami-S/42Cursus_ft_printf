#include <stdio.h>

int main(void)
{
	int i;
	//printf("%+ +--22.-4d\n", 42);
	i = printf("sssss\n%+22222222222222222d\n", 42);
	printf("%d\n", i);
	i = printf("sssss\n%*d\n", -1,42);
	printf("%d\n", i);
	return 0;
}
