/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 22:21:48 by mjay              #+#    #+#             */
/*   Updated: 2021/01/07 20:54:41 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tmpdst;
	const unsigned char	*tmpsrc;

	if (n == 0)
		return (NULL);
	tmpdst = (unsigned char *)dst;
	tmpsrc = (const unsigned char *)src;
	while (n--)
	{
		*tmpdst++ = *tmpsrc++;
		if (*(tmpsrc - 1) == (unsigned char)c)
			return ((void *)tmpdst);
	}
	return (NULL);
}
