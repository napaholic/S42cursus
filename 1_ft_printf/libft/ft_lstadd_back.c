/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:18:40 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/11 19:07:17 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list			*tmp;

	if (*lst == NULL)
		*lst = new;
	else if ((tmp = ft_lstlast(*lst)) != NULL)
		tmp->next = new;
}
