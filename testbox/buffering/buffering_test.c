#include <stdio.h>
#include <unistd.h>

int main(void)
{
	//while(*str)
	//{
	//	putchar(*str);
	//	str++;
	//}
	int len = 0;
	while(str[len])
		len++;
	write(1, str, len);
	//putchar('p');
	//putchar('\n');
	//write(1, "w", 1);
	write(1, "\n", 1);
	return 0;
}