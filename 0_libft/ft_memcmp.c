/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 23:55:40 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/07 21:03:18 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char *cmpptr1;
	const unsigned char *cmpptr2;

	if (ptr1 == ptr2 || num == 0)
		return (0);
	cmpptr1 = (const unsigned char *)ptr1;
	cmpptr2 = (const unsigned char *)ptr2;
	while (num)
	{
		if (*cmpptr1 != *cmpptr2)
			return (*cmpptr1 - *cmpptr2);
		++cmpptr1;
		++cmpptr2;
		--num;
	}
	return (0);
}
