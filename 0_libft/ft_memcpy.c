/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 18:40:11 by mjay              #+#    #+#             */
/*   Updated: 2021/01/12 13:30:25 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t count)
{
	unsigned char *tmpdst;
	unsigned char *tmpsrc;

	if (dst == src || count == 0)
		return (dst);
	tmpdst = (unsigned char*)dst;
	tmpsrc = (unsigned char*)src;
	while (count--)
		*tmpdst++ = *tmpsrc++;
	return (dst);
}
