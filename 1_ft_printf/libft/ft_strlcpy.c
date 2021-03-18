/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 03:09:13 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/07 21:58:01 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;

	if (src == NULL)
		return (0);
	idx = 0;
	if (dstsize > 0 && dst != NULL)
	{
		while (idx + 1 < dstsize && *(src + idx))
		{
			*(dst + idx) = *(src + idx);
			++idx;
		}
		*(dst + idx) = '\0';
	}
	while (*(src + idx) != '\0')
		++idx;
	return (idx);
}
