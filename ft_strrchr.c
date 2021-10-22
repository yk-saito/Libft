/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:58:00 by ysaito            #+#    #+#             */
/*   Updated: 2020/07/04 00:38:59 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		slen;

	ch = c;
	slen = ft_strlen(s);
	while (slen >= 0)
	{
		if (s[slen] == ch)
		{
			return ((char *)(s + slen));
		}
		slen--;
	}
	return (NULL);
}
