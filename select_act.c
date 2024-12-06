/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_act.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:43:04 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 21:50:50 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	select_act(va_list ap, t_format *s)
{
	if (s->width == OVERFLOW || s->prec == OVERFLOW)
		return (PRINTF_ERROR);
	if (s->count == 1 || s->spec == '%')
		return (print_char('%', s));
	else if (s->spec == 'c')
		return (print_char(va_arg(ap, int), s));
	else if (s->spec == 's')
		return (print_str(va_arg(ap, char *), s));
	else if (s->spec == 'p')
		return (print_addr(va_arg(ap, void *), s));
	else if (s->spec == 'd' || s->spec == 'i')
		return (print_nbr(va_arg(ap, int), s));
	else if (s->spec == 'u')
		return (print_unsigned_nbr(va_arg(ap, unsigned int), s));
	else if (s->spec == 'x')
		return (print_hex(va_arg(ap, unsigned int), "0123456789abcdef", s));
	else if (s->spec == 'X')
		return (print_hex(va_arg(ap, unsigned int), "0123456789ABCDEF", s));
	return (PRINTF_ERROR);
}
