/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:49:25 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/10 18:03:24 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_lstsize(t_list *lst)
{
	size_t			cnt;

	cnt = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		++cnt;
	}
	return (cnt);
}
