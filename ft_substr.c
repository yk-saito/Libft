/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:31:01 by ysaito            #+#    #+#             */
/*   Updated: 2020/07/07 11:35:37 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	newlen;
	size_t	i;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen || len <= 0)
		return (ft_strdup(""));
	newlen = (slen - start) > len ? len : slen - start;
	if (!(new = (char *)malloc(newlen + 1)))
		return (NULL);
	i = 0;
	while (s[start] != '\0' && newlen-- > 0)
	{
		new[i++] = s[start++];
	}
	new[i] = '\0';
	return (new);
}
