/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 19:26:59 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/06 02:41:54 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_cnt(char *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s != c && (*(s + 1) == c ||
			*(s + 1) == '\0'))
			++cnt;
		++s;
	}
	return (cnt);
}

static	char	*get_word(char *s, char c)
{
	char	*start;
	char	*last;
	char	*word;

	while (*s == c && *s != '\0')
		++s;
	start = s;
	if (!start)
		return (NULL);
	while (*s != c && *s != '\0')
		++s;
	last = s;
	if ((word = ft_substr(s, 0, last - start)) == NULL)
		return (NULL);
	return (word);
}

char			**ft_split(char const *s, char c)
{
	size_t	cnt;
	size_t	idx;
	char	*word;
	char	**result;
	char	*sidx;

	if (s == NULL)
		return (NULL);
	idx = 0;
	cnt = get_cnt(s, c);
	if ((result = ft_calloc(sizeof(char), cnt + 1)) == NULL)
		return (NULL);
	while (idx < cnt)
	{
		sidx = *(result + idx);
		if ((*(result + idx) = get_word(sidx, c)) == NULL)
		{
			while (idx > 0)
				free(*(result + --idx));
			free(result);
			return (NULL);
		}
		*(result + idx++) = word;
	}
	return (result);
}
