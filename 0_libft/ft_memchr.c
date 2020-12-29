/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 22:59:40 by mjay              #+#    #+#             */
/*   Updated: 2020/12/28 19:02:13 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *ptr, int value, size_t num)
{
	char			*tmpchr;
	unsigned char	cmpchr;

	tmpchr = (char*)ptr;
	cmpchr = (unsigned char)value;
	while (num--)
	{
		if (*tmpchr == cmpchr)
			return ((void*)tmpchr);
		tmpchr++;
	}
	return (NULL);
}
