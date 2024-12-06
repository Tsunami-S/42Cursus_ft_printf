#include "ft_printf.h"

int main(void)
{
	int len;
	int ftlen;

	printf("---------------\nprintf\nft_printf\nlen : ftlen\n---------------\n\n");
	printf("unsigned-----------------------\n");
	printf("        [12345678901234567890]\n");

	printf("width----------------------------------\n");
	len = printf("%%u       :[%u]\n", 42);
	ftlen = ft_printf("%%u       :[%u]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%u       :[%u]\n", 42000);
	ftlen = ft_printf("%%u       :[%u]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%010u    :[%010u]\n", 42);
	ftlen = ft_printf("%%010u    :[%010u]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%010u    :[%010u]\n", 42000);
	ftlen = ft_printf("%%010u    :[%010u]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10u    :[%-10u]\n", 42);
	ftlen = ft_printf("%%-10u    :[%-10u]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10u    :[%-10u]\n", 42000);
	ftlen = ft_printf("%%-10u    :[%-10u]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	printf("prec----------------------------------\n");
	len = printf("%%.4u     :[%.4u]\n", 42);
	ftlen = ft_printf("%%.4u     :[%.4u]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.4u     :[%.4u]\n", 42000);
	ftlen = ft_printf("%%.4u     :[%.4u]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4u  :[%-10.4u]\n", 42);
	ftlen = ft_printf("%%-10.4u  :[%-10.4u]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4u  :[%-10.4u]\n", 42000);
	ftlen = ft_printf("%%-10.4u  :[%-10.4u]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4u  :[%-10.4u]\n", 42);
	ftlen = ft_printf("%%-10.4u  :[%-10.4u]\n", 42);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4u  :[%-10.4u]\n", 42000);
	ftlen = ft_printf("%%-10.4u  :[%-10.4u]\n", 42000);
	printf("%d : %d\n\n", len, ftlen);

	printf("zero----------------------------------\n");
	len = printf("%%u       :[%u]\n", 0);
	ftlen = ft_printf("%%u       :[%u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%u       :[%u]\n", 0);
	ftlen = ft_printf("%%u       :[%u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%010u    :[%010u]\n", 0);
	ftlen = ft_printf("%%010u    :[%010u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%010u    :[%010u]\n", 0);
	ftlen = ft_printf("%%010u    :[%010u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10u    :[%-10u]\n", 0);
	ftlen = ft_printf("%%-10u    :[%-10u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10u    :[%-10u]\n", 0);
	ftlen = ft_printf("%%-10u    :[%-10u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	printf("prec-zero-----------------------------\n");
	len = printf("%%.4u       :[%.4u]\n", 0);
	ftlen = ft_printf("%%.4u       :[%.4u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.4u       :[%.4u]\n", 0);
	ftlen = ft_printf("%%.4u       :[%.4u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4u    :[%-10.4u]\n", 0);
	ftlen = ft_printf("%%-10.4u    :[%-10.4u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-10.4u    :[%-10.4u]\n", 0);
	ftlen = ft_printf("%%-10.4u    :[%-10.4u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.u        :[%.u]\n", 0);
	ftlen = ft_printf("%%.u        :[%.u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%.0u       :[%.0u]\n", 0);
	ftlen = ft_printf("%%.0u       :[%.0u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-.u       :[%-.u]\n", 0);
	ftlen = ft_printf("%%-.u       :[%-.u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	len = printf("%%-.0u      :[%-.0u]\n", 0);
	ftlen = ft_printf("%%-.0u      :[%-.0u]\n", 0);
	printf("%d : %d\n\n", len, ftlen);

	return 0;
}
