/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 18:34:23 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/07 22:35:47 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	if (num == 0 || s1 == s2)
		return (0);
	if (*s1 != *s2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	while (num && *s1 && *s1 == *s2)
	{
		++s1;
		++s2;
		--num;
	}
	if (num == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
