/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 17:46:43 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/14 17:36:45 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t litnum;

	if (*little == '\0')
		return ((char *)big);
	litnum = ft_strlen(little);
	while (*big != '\0' && len-- >= litnum)
	{
		if (*big == *little && ft_strncmp(big, little, litnum) == 0)
			return ((char *)big);
		++big;
	}
	return (NULL);
}
