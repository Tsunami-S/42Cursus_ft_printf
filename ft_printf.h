/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:42:14 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 17:42:16 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_format
{
	int		print_len;
	int		count;
	int		sharp;
	int		zero;
	int		hyp;
	int		blanc;
	int		plus;
	int		width;
	int		dot;
	int		prec;
	char	spec;
}			t_format;

int			ft_printf(const char *format, ...);
void		init_t_format(t_format *s);
void		flag_check(const char *str, t_format *s);
int			select_act(va_list ap, t_format *s);
int			pf_putchar(char c, t_format *s);
int			pf_putstr(char *str, t_format *s);
int			pf_putnbr(int nbr, t_format *s);
int			pf_putnbr_unsigned(unsigned int nbr, t_format *s);
int			pf_putnbr_hex(unsigned int nbr, char *base, t_format *s);
int			pf_putaddr(void *addr, t_format *s);

/* utils */
int			ft_abs(int n);
size_t		ft_strlen(const char *s);
int			ft_atoi(const char *nptr);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoin_three(char const *s1, char const *s2, char const *s3);
size_t		ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dsize);
int			ft_isdigit(int c);
void		reverse_str(char *str);
void		pf_charset(char *block, char c, int size);

#endif
