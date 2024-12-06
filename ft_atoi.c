/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:49:08 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 16:39:20 by tssaito          ###   ########.fr       */
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
	int	ans;

	ans = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
		return (0);
	while (ft_isdigit(*nptr))
	{
		if ((ans > INT_MAX / 10 || (ans == INT_MAX / 10 && *nptr - '0' > INT_MAX
					% 10)))
			return (-1);
		ans = ans * 10 + *nptr - '0';
		nptr++;
	}
	return (ans);
}
