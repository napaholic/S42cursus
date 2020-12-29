/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 17:46:43 by jaewkim           #+#    #+#             */
/*   Updated: 2020/12/28 18:32:16 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t litnum;

	if (little == NULL)
		return (big);
	litnum = ft_strlen(little);
	len -= litnum;
	while (len-- && *big)
	{
		if (ft_memcmp(big, little, litnum) == 0)
			return (big);
		++big;
	}
	return (NULL);
}
