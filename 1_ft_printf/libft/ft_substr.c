/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:23:42 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/08 04:21:02 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;

	result = NULL;
	if (s == NULL)
		return (NULL);
	if ((result = ft_calloc(len + 1, sizeof(char))) == NULL)
		return (NULL);
	if (len == 0)
		return (result);
	slen = ft_strlen(s);
	if (start >= slen)
		return (result);
	len = start + len <= slen ? len : slen - start;
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
