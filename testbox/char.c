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
	printf("%%4c  : [%4c]\n", '\0');
	printf("%%4c  : [1234]\n", '\0');
	printf("%%-1c : [%-1c]\n", '0');
	printf("%%-2c : [%-2c]\n", 0);
	printf("%%-3c : [%-3c]\n", 0);
	printf("%%-3s : [%-3s]\n", "");
	printf("%%4c  : [1234]\n");
	return 0;
}
