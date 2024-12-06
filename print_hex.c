/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:42:52 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 20:07:36 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	sharp_check(char sharp[3], unsigned int n, char *base, t_format *s);
static void	convert_hex(char hex_str[11], unsigned int n, char *base,
				t_format *s);
static char	*zero_block(char *sharp, char *hex_str, t_format *s);
static char	*make_print_block(char *sharp, char *hex, char *zero, t_format *s);

int	print_hex(unsigned int nbr, char *base, t_format *s)
{
	int		write_len;
	char	sharp[3];
	char	hex_str[11];
	char	*zero;
	char	*print_block;

	sharp_check(sharp, nbr, base, s);
	convert_hex(hex_str, nbr, base, s);
	zero = zero_block(sharp, hex_str, s);
	if (!zero)
		return (-1);
	print_block = make_print_block(sharp, hex_str, zero, s);
	free(zero);
	if (!print_block)
		return (-1);
	write_len = write(1, print_block, ft_strlen(print_block));
	free(print_block);
	return (write_len);
}

static char	*make_print_block(char *sharp, char *hex, char *zero, t_format *s)
{
	int		blank_size;
	char	*printable_block;
	char	*blank_block;
	char	*print_block;

	printable_block = ft_strjoin_three(sharp, zero, hex);
	if (!printable_block)
		return (NULL);
	blank_size = s->width - ft_strlen(printable_block);
	if (blank_size <= 0)
		return (printable_block);
	blank_block = (char *)malloc(sizeof(char) * (blank_size + 1));
	if (!blank_block)
		return (free(printable_block), NULL);
	ft_charset(blank_block, ' ', blank_size);
	if (s->hyp)
		print_block = ft_strjoin(printable_block, blank_block);
	else
		print_block = ft_strjoin(blank_block, printable_block);
	free(blank_block);
	free(printable_block);
	if (!print_block)
		return (NULL);
	return (print_block);
}

static void	sharp_check(char sharp[3], unsigned int n, char *base, t_format *s)
{
	sharp[2] = '\0';
	if (!s->sharp || !n)
	{
		sharp[0] = '\0';
		sharp[1] = '\0';
	}
	else
	{
		sharp[0] = '0';
		sharp[1] = base[10] + 23;
	}
}

static void	convert_hex(char hex_str[11], unsigned int n, char *base,
		t_format *s)
{
	int	i;

	i = 0;
	if (!n && s->dot && (!s->prec || s->prec == -1))
	{
		hex_str[0] = '\0';
		return ;
	}
	if (!n)
	{
		hex_str[0] = '0';
		hex_str[1] = '\0';
		return ;
	}
	while (n)
	{
		hex_str[i] = base[n % 16];
		i++;
		n /= 16;
	}
	hex_str[i] = '\0';
	ft_strrev(hex_str);
}

static char	*zero_block(char *sharp, char *hex_str, t_format *s)
{
	char	*zero;
	int		i;
	int		hex_len;
	int		malloc_size;

	hex_len = ft_strlen(hex_str);
	malloc_size = 0;
	if (s->dot)
		malloc_size = s->prec - hex_len;
	else if (s->zero)
		malloc_size = s->width - ft_strlen(sharp) - hex_len;
	if (malloc_size < 0)
		malloc_size = 0;
	zero = (char *)malloc(sizeof(char) * (malloc_size + 1));
	if (!zero)
		return (NULL);
	i = 0;
	while (i < malloc_size)
	{
		zero[i] = '0';
		i++;
	}
	zero[i] = '\0';
	return (zero);
}
