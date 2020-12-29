/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 19:08:59 by jaewkim           #+#    #+#             */
/*   Updated: 2020/12/29 06:05:43 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == '\n' ||
		c == '\t' ||
		c == '\f' ||
		c == '\r' ||
		c == '\v' ||
		c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *s)
{
	unsigned long long	tmp;
	int					isminus;

	tmp = 0;
	isminus = 1;
	while(ft_isspace(*s))
		++s;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			isminus = -1;
		++s;
	}
	while(*s == '0')
		++s;
	while(ft_isdigit(*s) && tmp <= LLONG_MAX)
		tmp = tmp * 10 + (*s & ~48);
	if ((tmp > LLONG_MAX && isminus == 1) ||
		(tmp > LLONG_MIN && isminus == -1))
		return (isminus == 1 ? 0 : -1);
	return (isminus * (long long)tmp);
}
