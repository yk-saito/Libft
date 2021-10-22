/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 17:08:01 by ysaito            #+#    #+#             */
/*   Updated: 2020/07/02 19:54:21 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sp;
	unsigned char		uc;

	sp = s;
	uc = c;
	while (n-- > 0)
	{
		if (*sp == uc)
		{
			return ((void *)sp);
		}
		sp++;
	}
	return (NULL);
}
