/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 03:09:13 by jaewkim           #+#    #+#             */
/*   Updated: 2020/12/28 13:47:00 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	tmp;

	if (dst == NULL && src == NULL)
		return (0);
	srclen = ft_strlen(src);
	if (dstsize)
	{
		if (srclen > dstsize)
			tmp = dstsize;
		else
			tmp = srclen;
		ft_memcpy(dst, src, tmp);
		dst[tmp] = '\0';
	}
	return (srclen);
}
