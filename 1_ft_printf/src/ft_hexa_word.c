/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 09:47:07 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/09 17:40:00 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		ft_in_put_part_hexa(char *hexa, t_flags *flags)
{
	int char_cnt;

	char_cnt = 0;
	if (flags->dot >= 0)
		char_cnt += ft_treat_width(flags->dot - 1, ft_strlen(hexa) - 1, 1);
	char_cnt += ft_putstrprec(hexa, ft_strlen(hexa));
	return (char_cnt);
}

static int		ft_put_part_hexa(char *hexa, t_flags *flags)
{
	int char_cnt;

	char_cnt = 0;
	if (flags->minus == 1)
		char_cnt += ft_in_put_part_hexa(hexa, flags);
	if (flags->dot >= 0 && (size_t)flags->dot < ft_strlen(hexa))
		flags->dot = ft_strlen(hexa);
	if (flags->dot >= 0)
	{
		flags->width -= flags->dot;
		char_cnt += ft_treat_width(flags->width, 0, 0);
	}
	else
		char_cnt += ft_treat_width(flags->width,
		ft_strlen(hexa), flags->zero);
	if (flags->minus == 0)
		char_cnt += ft_in_put_part_hexa(hexa, flags);
	return (char_cnt);
}

int				ft_hexa_word(unsigned int uint, int lower, t_flags *flags)
{
	char	*hexa_word;
	int		char_cnt;

	char_cnt = 0;
	if (flags->dot == 0 && uint == 0)
	{
		char_cnt += ft_treat_width(flags->width, 0, 0);
		return (char_cnt);
	}
	hexa_word = ft_ull_base((unsigned long long)uint, 16);
	if (lower == 1)
		hexa_word = ft_str_tolower(hexa_word);
	char_cnt += ft_put_part_hexa(hexa_word, flags);
	free(hexa_word);
	return (char_cnt);
}
