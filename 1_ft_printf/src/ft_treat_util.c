/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 02:09:37 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/05 21:16:32 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int				ft_treat_width(int width, int minus, int zero)
{
	int char_count;

	char_count = 0;
	while (width - minus > 0)
	{
		if (zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		width -= 1;
		char_count++;
	}
	return (char_count);
}

int				ft_putstrprec(char *str, int prec)
{
	int char_count;

	char_count = 0;
	while (str[char_count] && char_count < prec)
		ft_putchar(str[char_count++]);
	return (char_count);
}

int				ft_putchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

char			*ft_str_tolower(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}

int				ft_treat_char(char c, t_flags *flags)
{
	int char_count;

	char_count = 0;
	if (flags->minus == 1)
		ft_putchar(c);
	char_count = ft_treat_width(flags->width, 1, 0);
	if (flags->minus == 0)
		ft_putchar(c);
	return (char_count + 1);
}
