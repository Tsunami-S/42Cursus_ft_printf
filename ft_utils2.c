/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:49:08 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/06 20:17:18 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_abs(int n);
int		ft_isdigit(int c);
int		ft_atoi(const char *nptr);
void	ft_strrev(char *str);
void	ft_charset(char *block, char c, int size);

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

void	ft_charset(char *block, char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		block[i] = c;
		i++;
	}
	block[i] = '\0';
}

int	ft_atoi(const char *nptr)
{
	int	ans;

	ans = 0;
	while (*nptr == ' ' || (9 <= *nptr && *nptr <= 13))
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

void	ft_strrev(char *str)
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
