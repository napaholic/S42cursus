/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:21:15 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/11 19:08:08 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*idx;
	t_list			*start;

	if (lst == NULL)
		return (NULL);
	start = NULL;
	idx = NULL;
	while (lst != NULL)
	{
		if ((idx = ft_lstnew(f(lst->content))) == NULL)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, idx);
		lst = lst->next;
	}
	return (start);
}
