/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:42:41 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 18:11:36 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_addr(char addr_str[23], void *addr);
static char	*make_block(char *addr, int addr_len, t_format *s);

int	pf_putaddr(void *addr, t_format *s)
{
	int		write_len;
	int		addr_len;
	char	addr_str[23];
	char	*print_block;

	if (!addr)
		return (pf_putstr("(nil)", s));
	addr_len = convert_addr(addr_str, addr);
	if (s->width <= addr_len)
		return (write(1, addr_str, addr_len));
	print_block = make_block(addr_str, addr_len, s);
	if (!print_block)
		return (-1);
	write_len = write(1, print_block, ft_strlen(print_block));
	free(print_block);
	return (write_len);
}

static int	convert_addr(char addr_str[23], void *addr)
{
	int					i;
	unsigned long long	hex_addr;
	char				*base;

	base = "0123456789abcdef";
	hex_addr = (unsigned long long)addr;
	i = 0;
	while (hex_addr)
	{
		addr_str[i] = base[hex_addr % 16];
		i++;
		hex_addr /= 16;
	}
	addr_str[i++] = 'x';
	addr_str[i++] = '0';
	addr_str[i] = '\0';
	reverse_str(addr_str);
	return (ft_strlen(addr_str));
}

static char	*make_block(char *addr, int addr_len, t_format *s)
{
	int		blank_size;
	char	*blank_block;
	char	*print_block;

	blank_size = s->width - addr_len;
	blank_block = (char *)malloc(sizeof(char) * (blank_size + 1));
	if (!blank_block)
		return (NULL);
	pf_charset(blank_block, ' ', blank_size);
	if (s->hyp)
		print_block = ft_strjoin(addr, blank_block);
	else
		print_block = ft_strjoin(blank_block, addr);
	free(blank_block);
	if (!print_block)
		return (NULL);
	return (print_block);
}
