#include <stdio.h>
static void reverse_str(char *str)
{
	int len;
	int i;
	char tmp;

	len = 0;
	while(str[len])
		len++;
	i = 0;
	while(i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

int main(void)
{
	char str[6];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';
	str[4] = 'e';
	str[5] = '\0';
	printf("%s\n", str);
	reverse_str(str);
	printf("%s\n", str);
	return 0;
}
