/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:36:15 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/18 13:36:16 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	base_check(char *base)
{
	int	i;
	int	k;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		k = i + 1;
		while (base[k])
		{
			if (base[i] == base[k])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

void	recursive_putnbr(int nbr, char *base)
{
	int	base_count;

	base_count = ft_strlen(base);
	if (nbr > 0)
	{
		recursive_putnbr(nbr / base_count, base);
		write(1, &base[nbr % base_count], 1);
	}
	else if (nbr < 0)
	{
		recursive_putnbr(nbr / base_count, base);
		write(1, &base[nbr % base_count * -1], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (base_check(base) == 0)
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr < 0)
		write(1, "-", 1);
	recursive_putnbr(nbr, base);
}

// int   main(void)
//{
//      int             nbr;
//      char    *base;
//
//      base = "01";
//      nbr = -3;
//      ft_putnbr_base(nbr, base);
//      return (0);
//}
