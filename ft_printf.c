#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int len;
	int tmp;
	int count;
	va_list ap;

	va_start(ap, format);
	len = 0;
	while(*format)
	{
		count = 1;
		if(*format != '%')
			tmp = ft_putchar_pf(*format);
		else
		{
			count = search_char(format);
			tmp = select_act(ap, format, count);
		}
		if(tmp == -1)
			return -1;
		len += tmp;
		while(count--)
			format++;
	}
	va_end(ap);
	return (len);
}

#include <stdio.h>
int main(void)
{
	printf("<Mandatory>\nprintf:\nft_printf:\n\n");
	printf("%%c: %c (\'c\')\n", 'c');
	ft_printf("%%c: %c (\'c\')\n\n", 'c');
	printf("%%s: %s (\"abc\")\n", "abc");
	ft_printf("%%s: %s (\"abc\")\n\n", "abc");
	printf("%%p: %p ((void *)\"abc\")\n", (void *)"abc");
	ft_printf("%%p: %p ((void *)\"abc\")\n\n", (void *)"abc");
	printf("%%d: %d (42)\n", 42);
	ft_printf("%%d: %d (42)\n\n", 42);
	printf("%%i: %i (42)\n", 42);
	ft_printf("%%i: %i (42)\n\n", 42);
	printf("%%u: %u (42)\n", 42);
	ft_printf("%%u: %u (42)\n\n", 42);
	printf("%%x: %x (42)\n", 42);
	ft_printf("%%x: %x (42)\n\n", 42);
	printf("%%X: %X (42)\n", 42);
	ft_printf("%%X: %X (42)\n\n", 42);
	printf("%%%%: %%\n");
	ft_printf("%%%%: %%\n\n");
	return 0;
}
