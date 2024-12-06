#include <stdio.h>

int main(void)
{
	printf("<char>\n");
	printf("%%c   : [%c]\n", 'a');
	printf("%%#c  : [%#c]\n", 'a');
	printf("%%0c  : [%0c]\n", 'a');
	printf("%%4c  : [%4c]\n", 'a');
	printf("%%-4c : [%-4c]\n", 'a');
	printf("%%-c  : [%-c]\n", 'a');
	printf("%%+c  : [%+c]\n", 'a');
	printf("%% c  : [% c]\n", 'a');
	printf("%%.4c : [%.4c]\n", 'a');
	return 0;
}
