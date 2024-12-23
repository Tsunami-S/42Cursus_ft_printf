/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:42:32 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 17:42:33 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_t_format(t_format *s)
{
	s->print_len = 0;
	s->count = 1;
	s->sharp = 0;
	s->zero = 0;
	s->hyp = 0;
	s->blanc = 0;
	s->plus = 0;
	s->width = 0;
	s->dot = 0;
	s->prec = 0;
	s->spec = 0;
}
