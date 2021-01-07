/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 16:35:05 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/07 01:19:25 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_cnt(long long n)
{
	size_t	cnt;

	cnt = 0;
	if (n < 0)
	{
		n *= -1;
		++cnt;
	}
	while (1)
	{
		if (n > 0)
		{
			n /= 10;
			++cnt;
		}
		else
			break ;
	}
	++cnt;
	return (cnt);
}

char			*ft_itoa(int n)
{
	long long		tmp_n;
	size_t			cnt;
	char			*result;
	char			*s;

	tmp_n = n;
	cnt = get_cnt(tmp_n);
	if ((result = malloc(sizeof(char) * cnt)) == NULL)
		return (NULL);
	s = result;
	if (n < 0)
		*result = '-';
	*(result + --cnt) = '\0';
	while (tmp_n != 0)
	{
		*(result + --cnt) = tmp_n % 10;
		tmp_n /= 10;
	}
	return (s);
}
