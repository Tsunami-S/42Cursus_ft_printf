#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

int ft_printf(const char *format, ...);
int ft_abs(int n);
int ft_putchar_pf(char c);
int	ft_putnbr_hex_pf(unsigned long nbr, char *base);
int	ft_putnbr_pf(long nbr);
int	ft_putstr_pf(char *s);
int ft_putaddr_pf(void *addr);
int select_act(va_list ap, char c);

#endif
