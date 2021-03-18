/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 16:47:15 by jaewkim           #+#    #+#             */
/*   Updated: 2020/12/30 13:00:28 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
