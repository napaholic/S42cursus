/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:23:42 by jaewkim           #+#    #+#             */
/*   Updated: 2020/12/30 13:44:21 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	if (len == 0)
		return (result);
	if ((result = ft_calloc(sizeof(char), len + 1)) == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (result);
	if (start + len > slen)
		len = slen - start;
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
