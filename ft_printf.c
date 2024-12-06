/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:42:02 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 21:54:12 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int			total_len;
	int			print_len;
	va_list		ap;
	t_format	spec_type;

	va_start(ap, format);
	total_len = 0;
	while (*format)
	{
		init_t_format(&spec_type);
		if (*format != '%')
			print_len = print_char(*format, &spec_type);
		else
		{
			flag_check(format, &spec_type);
			print_len = select_act(ap, &spec_type);
		}
		if (print_len == PRINTF_ERROR || INT_MAX - total_len < print_len)
			return (PRINTF_ERROR);
		format += spec_type.count;
		total_len += print_len;
	}
	va_end(ap);
	return (total_len);
}
