#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <strarg.h>

int ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
int select_act(char *format);
int to_end(char *format);

#endif
