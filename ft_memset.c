/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 23:53:03 by ysaito            #+#    #+#             */
/*   Updated: 2021/11/01 20:48:14 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bp;
	unsigned char	uc;

	bp = (unsigned char *)b;
	uc = (unsigned char)c;
	while (len > 0)
	{
		*bp++ = c;
		len--;
	}
	return (b);
}
