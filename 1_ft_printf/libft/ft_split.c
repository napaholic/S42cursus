/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 19:26:59 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/11 23:56:05 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_cnt(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			++cnt;
		++s;
	}
	return (cnt);
}

static	char	*get_word(char const *s, char c, size_t *sidx)
{
	char	const	*start;
	char	const	*last;
	char			*word;

	while (*(s + *sidx) != '\0' && *(s + *sidx) == c)
		++(*sidx);
	start = s + *sidx;
	while (*(s + *sidx) != '\0' && *(s + *sidx) != c)
		++(*sidx);
	last = s + *sidx;
	if ((word = ft_calloc(last - start + 1, sizeof(char))) == NULL)
		return (NULL);
	ft_strlcpy(word, start, last - start + 1);
	return (word);
}

char			**ft_split(char const *s, char c)
{
	size_t	cnt;
	size_t	idx;
	size_t	sidx;
	char	*word;
	char	**result;

	if (s == NULL)
		return (NULL);
	idx = 0;
	sidx = 0;
	cnt = get_cnt(s, c);
	if ((result = ft_calloc(cnt + 1, sizeof(char *))) == NULL)
		return (NULL);
	while (idx < cnt)
	{
		if ((word = get_word(s, c, &sidx)) == NULL)
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
