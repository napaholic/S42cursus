/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:25:10 by jaewkim           #+#    #+#             */
/*   Updated: 2021/02/01 11:23:03 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	const char *eos;

	eos = str;
	while (*eos++)
		;
	return ((int)(eos - str - 1));
}

char	*ft_strdup(const char *s1)
{
	size_t	cnt;
	char	*str;

	cnt = ft_strlen(s1);
	if ((str = (char*)malloc(sizeof(*s1) * (cnt + 1))) == NULL)
		return (NULL);
	str = ft_memcpy(str, s1, cnt);
	str[cnt] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char		*result;
	size_t		s1_len;
	size_t		s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if ((result = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1))) == NULL)
		return (NULL);
	ft_memcpy(result, s1, s1_len);
	ft_memcpy(result + s1_len, s2, s2_len);
	result[s1_len + s2_len] = '\0';
	free(s1);
	return (result);
}

void	*ft_memcpy(void *dst, const void *src, size_t count)
{
	unsigned char *tmpdst;
	unsigned char *tmpsrc;

	if (dst == src || count == 0)
		return (dst);
	tmpdst = (unsigned char*)dst;
	tmpsrc = (unsigned char*)src;
	while (count--)
		*tmpdst++ = *tmpsrc++;
	return (dst);
}
