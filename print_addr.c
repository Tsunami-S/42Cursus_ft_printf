/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_addr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:42:41 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 21:53:27 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_addr(char addr_block[23], void *addr);
static char	*make_block(char *addr, int addr_len, t_format *s);

int	print_addr(void *addr, t_format *s)
{
	int		write_len;
	int		addr_len;
	char	addr_block[23];
	char	*print_block;

	if (!addr)
		return (print_str("(nil)", s));
	addr_len = convert_addr(addr_block, addr);
	if (s->width <= addr_len)
		return (write(1, addr_block, addr_len));
	print_block = make_block(addr_block, addr_len, s);
	if (!print_block)
		return (PRINTF_ERROR);
	write_len = write(1, print_block, ft_strlen(print_block));
	free(print_block);
	return (write_len);
}

static int	convert_addr(char addr_block[23], void *addr)
{
	int					i;
	unsigned long long	hex_addr;
	char				*base;

	base = "0123456789abcdef";
	hex_addr = (unsigned long long)addr;
	i = 0;
	while (hex_addr)
	{
		addr_block[i] = base[hex_addr % 16];
		i++;
		hex_addr /= 16;
	}
	addr_block[i++] = 'x';
	addr_block[i++] = '0';
	addr_block[i] = '\0';
	ft_strrev(addr_block);
	return (ft_strlen(addr_block));
}

static char	*make_block(char *addr, int addr_len, t_format *s)
{
	int		blank_len;
	char	*blank_block;
	char	*print_block;

	blank_len = s->width - addr_len;
	blank_block = (char *)malloc(sizeof(char) * (blank_len + 1));
	if (!blank_block)
		return (NULL);
	ft_charset(blank_block, ' ', blank_len);
	if (s->hyp)
		print_block = ft_strjoin(addr, blank_block);
	else
		print_block = ft_strjoin(blank_block, addr);
	free(blank_block);
	if (!print_block)
		return (NULL);
	return (print_block);
}
