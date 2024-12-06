#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int i;
	i = write(1, "abcde\n", 6);
	printf("%d\n", i);
	return 0;
}
