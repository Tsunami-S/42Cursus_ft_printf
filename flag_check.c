/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:41:54 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 18:56:08 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_dot(char c);
static int	is_spec(char c);
static int	is_flag(char c, t_format *s);

void	flag_check(const char *str, t_format *s)
{
	const char	*start;

	start = str;
	str++;
	while (*str && is_flag(*str, s))
		str++;
	s->width = ft_atoi(str);
	while (*str && ft_isdigit(*str))
		str++;
	if (*str && is_dot(*str))
	{
		s->dot = 1;
		str++;
		s->prec = ft_atoi(str);
		while (*str && ft_isdigit(*str))
			str++;
	}
	if (*str && is_spec(*str))
	{
		s->spec = *str;
		s->count = str - start + 1;
	}
	else
		s->count = 1;
}

static int	is_flag(char c, t_format *s)
{
	if (c == '#')
		s->sharp = 1;
	else if (c == '0')
		s->zero = 1;
	else if (c == '-')
		s->hyp = 1;
	else if (c == ' ')
		s->blanc = 1;
	else if (c == '+')
		s->plus = 1;
	else
		return (0);
	return (1);
}

static int	is_dot(char c)
{
	if (c == '.')
		return (1);
	return (0);
}

static int	is_spec(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}
