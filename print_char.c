/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:42:45 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 21:53:17 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*make_print_block(int len);

int	print_char(char c, t_format *s)
{
	int		write_len;
	char	*print_block;

	if (s->width <= 1 || c == '%')
		return (write(1, &c, 1));
	print_block = make_print_block(s->width + 1);
	if (!print_block)
		return (PRINTF_ERROR);
	if (s->hyp)
		print_block[0] = c;
	else
		print_block[s->width - 1] = c;
	write_len = write(1, print_block, s->width);
	free(print_block);
	return (write_len);
}

static char	*make_print_block(int len)
{
	char	*print_block;
	int		i;

	print_block = (char *)malloc(sizeof(char) * len);
	if (!print_block)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		print_block[i] = ' ';
		i++;
	}
	print_block[i] = '\0';
	return (print_block);
}
