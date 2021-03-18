/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:50:59 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/07 22:47:08 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *idx;

	idx = (char *)s;
	while (*idx != '\0')
		++idx;
	while (idx - s >= 0)
	{
		if (*idx == (unsigned char)c)
			return ((char *)idx);
		--idx;
	}
	return (NULL);
}
