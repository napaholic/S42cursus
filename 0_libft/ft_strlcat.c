/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 17:55:13 by jaewkim           #+#    #+#             */
/*   Updated: 2020/12/28 18:32:57 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	idx;

	idx = 0;
	while (*dst && idx < size)
	{
		++dst;
		++idx;
	}
	while (*src && idx + 1 < size)
	{
		*dst++ = *src++;
		++idx;
	}
	if (idx < size)
		*dst = '\0';
	while (*src++)
		++idx;
	return (idx);
}
