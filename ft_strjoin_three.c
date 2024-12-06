/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:32:49 by tssaito           #+#    #+#             */
/*   Updated: 2024/12/05 22:08:56 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin_three(char const *s1, char const *s2, char const *s3)
{
	int		s1_len;
	int		s2_len;
	int		s3_len;
	char	*ans;

	if (!s1 || !s2 || !s3)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3_len = ft_strlen(s3);
	ans = (char *)malloc(sizeof(char) * (s1_len + s2_len  + s3_len+ 1));
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, s1, s1_len + 1);
	ft_strlcat(ans, s2, s1_len + s2_len + 1);
	ft_strlcat(ans, s3, s1_len + s2_len + s3_len + 1);
	return (ans);
}
