/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:24:03 by ysaito            #+#    #+#             */
/*   Updated: 2020/07/06 00:02:27 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;
	unsigned char		uc;
	size_t				i;

	dp = dst;
	sp = src;
	uc = c;
	i = 0;
	while (i < n)
	{
		dp[i] = sp[i];
		if (dp[i] == uc)
		{
			i++;
			return ((void *)dp + i);
		}
		i++;
	}
	return (NULL);
}
