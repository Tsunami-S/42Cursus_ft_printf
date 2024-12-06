/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:49:08 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 18:56:14 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_isspace(char c);
int			ft_abs(int n);
int			ft_atoi(const char *nptr);
int			ft_isdigit(int c);
void		reverse_str(char *str);

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

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
			return (OVERFLOW);
		ans = ans * 10 + *nptr - '0';
		nptr++;
	}
	return (ans);
}

void	reverse_str(char *str)
{
	int		len;
	int		i;
	char	tmp;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}
