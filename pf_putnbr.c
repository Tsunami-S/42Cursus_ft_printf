/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:42:48 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 17:44:45 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	sign_check(char sign[2], int nbr, t_format *s);
static char	*pf_itoa(int n, t_format *s);
static int	count_num(int n);
static char	*make_block(char *sign, char *nbr, t_format *s);

int	pf_putnbr(int nbr, t_format *s)
{
	int		write_len;
	char	sign[2];
	char	*nbr_str;
	char	*print_block;

	sign_check(sign, nbr, s);
	nbr_str = pf_itoa(nbr, s);
	if (!nbr_str)
		return (-1);
	print_block = make_block(sign, nbr_str, s);
	free(nbr_str);
	if (!print_block)
		return (-1);
	write_len = write(1, print_block, ft_strlen(print_block));
	free(print_block);
	return (write_len);
}

static char	*make_block(char *sign, char *nbr, t_format *s)
{
	int		blank_size;
	char	*block;
	char	*print_block;

	blank_size = s->width - ft_strlen(sign) - ft_strlen(nbr);
	if (blank_size <= 0)
		return (ft_strjoin(sign, nbr));
	block = (char *)malloc(sizeof(char) * (blank_size + 1));
	if (!block)
		return (NULL);
	if (s->hyp || s->dot || !s->zero)
		pf_charset(block, ' ', blank_size);
	else
		pf_charset(block, '0', blank_size);
	if (s->hyp)
		print_block = ft_strjoin_three(sign, nbr, block);
	else if (s->dot || !s->zero)
		print_block = ft_strjoin_three(block, sign, nbr);
	else
		print_block = ft_strjoin_three(sign, block, nbr);
	free(block);
	if (!print_block)
		return (NULL);
	return (print_block);
}

static void	sign_check(char sign[2], int nbr, t_format *s)
{
	sign[1] = '\0';
	if (nbr < 0)
		sign[0] = '-';
	else if (s->plus)
		sign[0] = '+';
	else if (s->blanc)
		sign[0] = ' ';
	else
		sign[0] = '\0';
}

static int	count_num(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*pf_itoa(int n, t_format *s)
{
	char	*ans;
	int		malloc_size;

	malloc_size = count_num(n);
	if (malloc_size < s->prec)
		malloc_size = s->prec;
	ans = (char *)malloc(sizeof(char) * (malloc_size + 1));
	if (!ans)
		return (NULL);
	if (!n && s->dot && (s->prec == -1 || !s->prec))
	{
		ans[0] = '\0';
		return (ans);
	}
	*(ans + malloc_size) = '\0';
	malloc_size--;
	while (malloc_size >= 0)
	{
		*(ans + malloc_size) = ft_abs(n % 10) + '0';
		n /= 10;
		malloc_size--;
	}
	return (ans);
}
