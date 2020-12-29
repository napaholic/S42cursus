/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 22:21:48 by mjay              #+#    #+#             */
/*   Updated: 2020/12/28 19:00:44 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*tmpdst;
	const char	*tmpsrc;

	tmpdst = (char *)dst;
	tmpsrc = (const char *)src;
	while (n--)
	{
		if (*tmpsrc == (unsigned char)c)
			return ((void*)tmpsrc);
		*tmpdst++ = *tmpsrc++;
	}
	return (NULL);
}
