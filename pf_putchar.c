/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:42:45 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 17:44:03 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*make_block(int size);

int	pf_putchar(char c, t_format *s)
{
	int		write_len;
	char	*str;

	if (s->width <= 1 || c == '%')
		return (write(1, &c, 1));
	str = make_block(s->width + 1);
	if (!str)
		return (-1);
	if (s->hyp)
		str[0] = c;
	else
		str[s->width - 1] = c;
	write_len = write(1, str, s->width);
	free(str);
	return (write_len);
}

static char	*make_block(int size)
{
	char	*block;
	int		i;

	block = (char *)malloc(sizeof(char) * size);
	if (!block)
		return (NULL);
	i = 0;
	while (i < size - 1)
	{
		block[i] = ' ';
		i++;
	}
	block[i] = '\0';
	return (block);
}
