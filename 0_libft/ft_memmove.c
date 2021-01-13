/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 23:00:04 by mjay              #+#    #+#             */
/*   Updated: 2021/01/12 13:24:17 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	tmpdst = (unsigned char*)dst;
	tmpsrc = (unsigned char*)src;
	if (dst > src)
	{
		tmpdst += n;
		tmpsrc += n;
		while (n--)
			*--tmpdst = *--tmpsrc;
	}
	else
		ft_memcpy(tmpdst, tmpsrc, n);
	return (dst);
}
