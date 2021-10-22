/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 08:34:09 by ysaito            #+#    #+#             */
/*   Updated: 2020/07/07 11:38:06 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	numlist;

	if (lst == NULL)
	{
		return (0);
	}
	numlist = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		numlist++;
	}
	return (numlist);
}
