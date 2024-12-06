/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:42:55 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 21:51:35 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*pf_itoa_unsigned(unsigned int n, t_format *s);
static int	count_num(unsigned int n);
static char	*make_block(char *nbr, t_format *s);

int	print_unsigned_nbr(unsigned int nbr, t_format *s)
{
	int		write_len;
	char	*nbr_block;
	char	*write_block;

	nbr_block = pf_itoa_unsigned(nbr, s);
	if (!nbr_block)
		return (PRINTF_ERROR);
	write_block = make_block(nbr_block, s);
	free(nbr_block);
	if (!write_block)
		return (PRINTF_ERROR);
	write_len = write(1, write_block, ft_strlen(write_block));
	free(write_block);
	return (write_len);
}

static char	*make_block(char *nbr, t_format *s)
{
	int		blank_size;
	char	*block;
	char	*write_block;

	blank_size = s->width - ft_strlen(nbr);
	if (blank_size <= 0)
		return (ft_strjoin(nbr, ""));
	block = (char *)malloc(sizeof(char) * (blank_size + 1));
	if (!block)
		return (NULL);
	if (s->hyp || s->dot || !s->zero)
		ft_charset(block, ' ', blank_size);
	else
		ft_charset(block, '0', blank_size);
	if (s->hyp)
		write_block = ft_strjoin(nbr, block);
	else
		write_block = ft_strjoin(block, nbr);
	free(block);
	if (!write_block)
		return (NULL);
	return (write_block);
}

static int	count_num(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*pf_itoa_unsigned(unsigned int n, t_format *s)
{
	char	*ans;
	int		malloc_size;

	malloc_size = count_num(n);
	if (malloc_size < s->prec)
		malloc_size = s->prec;
	ans = (char *)malloc(sizeof(char) * (malloc_size + 1));
	if (!ans)
		return (NULL);
	if (!n && s->dot && !s->prec)
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
