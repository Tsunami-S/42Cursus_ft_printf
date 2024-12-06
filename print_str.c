/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:43:01 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 20:16:25 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*make_blank_block(int blank_size);
static char	*make_block(char *str, int str_len, char *blank, t_format *s);

int	print_str(char *str, t_format *s)
{
	int		str_len;
	int		write_len;
	char	*blank_block;
	char	*write_block;

	if (!str && (!s->dot || s->prec >= 6))
		str = "(null)";
	else if (!str && s->dot)
		str = "";
	str_len = ft_strlen(str);
	if (s->dot && s->prec < str_len)
		str_len = s->prec;
	if (!s->width || s->width <= str_len)
		return (write(1, str, str_len));
	blank_block = make_blank_block(s->width - str_len);
	if (!blank_block)
		return (-1);
	write_block = make_block(str, str_len, blank_block, s);
	free(blank_block);
	if (!write_block)
		return (-1);
	write_len = write(1, write_block, s->width);
	free(write_block);
	return (write_len);
}

static char	*make_blank_block(int blank_size)
{
	char	*blank_block;

	blank_block = (char *)malloc(sizeof(char) * (blank_size + 1));
	if (!blank_block)
		return (NULL);
	ft_charset(blank_block, ' ', blank_size);
	return (blank_block);
}

static char	*make_block(char *str, int str_len, char *blank, t_format *s)
{
	char	*write_block;

	write_block = (char *)malloc(sizeof(char) * (s->width + 1));
	if (!write_block)
		return (NULL);
	write_block[0] = '\0';
	if (s->hyp)
	{
		ft_strlcpy(write_block, str, str_len + 1);
		ft_strlcat(write_block, blank, s->width + 1);
	}
	else
	{
		ft_strlcpy(write_block, blank, ft_strlen(blank) + 1);
		ft_strlcat(write_block, str, s->width + 1);
	}
	return (write_block);
}
