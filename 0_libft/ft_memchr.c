/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 22:59:40 by mjay              #+#    #+#             */
/*   Updated: 2021/01/07 20:59:14 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char			*tmpchr;

	tmpchr = ptr;
	while (num--)
	{
		if (*tmpchr == (unsigned char)value)
			return ((void *)tmpchr);
		++tmpchr;
	}
	return (NULL);
}
