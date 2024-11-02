#include <stdio.h>

int main(void)
{
	int i;

	printf("Mandatory\n");
	printf("%%c: %c (\'c\')\n", 'c');
	printf("%%s: %s (\"abc\")\n", "abc");
	printf("%%p: %p ((void *)\"abc\")\n", (void *)"abc");
	printf("%%p: %p \n", NULL);
	printf("%%d: %d (42)\n", 42);
	printf("%%i: %i (42)\n", 42);
	printf("%%u: %u (42)\n", 42);
	printf("%%x: %x (42)\n", 42);
	printf("%%X: %X (42)\n", 42);
	printf("%%%%: %%\n");
	putchar('\n');

	printf("Error cases\n");
	printf("with wflags\n");
	printf("%%yc: %yc (\'c\')\n");
	i = printf("%y\n");
	printf("%d\n", i);
	i = printf("%s\n", "abcde");
	printf("%d\n", i);
	i = printf("%s\n", "");
	printf("%d\n", i);
	i = printf("%s\n", NULL);
	printf("%d\n", i);
	printf("->\"error: unknown conversion type character ‘y’ in format\"\n");

	printf("\nBonus\n");
	printf("%%5d : %5d (42)\n", 42);
	printf("%%-5d: %-5d (42)\n", 42);
	printf("%%05d: %05d (42)\n", 42);
	printf("%%-05d: \"error: '0' flag ignored with '-' flag in gnu_printf format [-Werror=format=]\"\n");
	putchar('\n');

	printf("%%.5d : %.5d (42)\n", 42);
	printf("%%.d : %.d (42)\n", 42);
	printf("%%.d : %.d (0)\n", 0);
	printf("%%.0d : %.0d (42)\n", 42);
	printf("%%.0d : %.0d (0)\n", 0);
	printf("%%.5d : %.5d (4200000)\n", 4200000);
	printf("%%.5d : %.5d (-4200000)\n", 4200000);
	printf("%%.0d : %.0d (42)\n", 42);
	printf("%%.0d : %.0d (-42)\n", -42);
	printf("%%.5s: %.5s (\"abc\")\n", "abc");
	printf("%%.5s: %.5s (\"abcdefghi\")\n", "abcdefghi");
	printf("%%.s : %.s (\"abc\")\n", "abc");
	putchar('\n');

	printf("%%+d : %+d (42)\n", 42);
	printf("%%+d : %+d (-42)\n", -42);
	putchar('\n');

	printf("%% d : % d (42)\n", 42);
	printf("%% d : % d (-42)\n", -42);
	putchar('\n');

	printf("%%x  : %x (42)\n", 42);
	printf("%%#x : %#x (42)\n", 42);
	printf("%%#x : %#x (-42)\n", -42);
	printf("%%X  : %X (42)\n", 42);
	printf("%%#X : %#X (42)\n", 42);
	printf("%%#X : %#X (-42)\n", -42);
	return 0;
}
