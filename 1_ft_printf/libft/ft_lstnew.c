/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:59:39 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/11 19:17:54 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void *content)
{
	t_list *rst;

	if ((rst = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	rst->content = content;
	rst->next = 0;
	return (rst);
}
