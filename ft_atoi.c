/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:49:08 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/05 00:34:18 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long long	ans;
	int			sign;

	ans = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		if (sign > 0 && (ans > LONG_MAX / 10 || (ans == LONG_MAX / 10 && *nptr
					- '0' > LONG_MAX % 10)))
			return ((int)LONG_MAX);
		else if (sign < 0 && (-ans < LONG_MIN / 10 || (-ans == LONG_MIN / 10 &&
						-(*nptr - '0') < LONG_MIN % 10)))
			return ((int)LONG_MIN);
		ans = ans * 10 + *nptr - '0';
		nptr++;
	}
	return ((int)ans * sign);
}
