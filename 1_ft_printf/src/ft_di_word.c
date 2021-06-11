/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:27:28 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/12 06:50:54 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int				ft_put_in_part_di(char *val_di_str, int value_int, t_flags *flags)
{
	int				char_cnt;

	char_cnt = 0;
	value_int = 0;
	if (flags->nbyte < 0)
		ft_putchar('-');
	if (flags->dot >= 0)
		char_cnt += ft_treat_width(flags->dot - 1, ft_strlen(val_di_str) - 1, 1);
	char_cnt += ft_putstrprec(val_di_str, ft_strlen(val_di_str));
	return (char_cnt);
}

static int		ft_put_part_di(char *val_di_str, int save_value, t_flags *flags)
{
	int				char_cnt;

	char_cnt = 0;
	if (flags->minus == 1)
		char_cnt += ft_put_in_part_di(val_di_str, save_value, flags);
	if (flags->dot >= 0 && (size_t) flags->dot < ft_strlen(val_di_str))
		flags->dot = ft_strlen(val_di_str);
	if (flags->dot >= 0)
	{
		flags->width -= flags->dot;
		char_cnt += ft_treat_width(flags->width, 0, 0);
	}
	else
		char_cnt += ft_treat_width(flags->width, ft_strlen(val_di_str), flags->zero);
	if (flags->minus == 0)
		char_cnt += ft_put_in_part_di(val_di_str, save_value, flags);
	return (char_cnt);
}

int				ft_di_word(t_flags *flags, int value_int)
{
	long long		save_value;
	char			*val_di_str;
	size_t			char_cnt;

	save_value = value_int;
	char_cnt = 0;
	if (flags->dot == 0 && value_int == 0)
	{
		char_cnt += ft_treat_width(flags->width, 0, 0);
		return (char_cnt);
	}
	if (save_value < 0 && (flags->dot >= 0 || flags->zero == 1))
	{
		if (flags->zero == 1 && flags->dot == -1)
			ft_putstrprec("-", 1);
		save_value *= -1;
		flags->nbyte = -1;
		flags->width--;
		char_cnt++;
	}
	val_di_str = ft_itoa(save_value);
	char_cnt += ft_put_part_di(val_di_str, save_value, flags);
	free(val_di_str);
	return (char_cnt);
	/*
	포맷에 맞게 데이터를 만들고 화면에 출력하고 출력한 수 많큼의 int를 반환.
	포맷에 맞게 데이터를 만드는것
	화면에출력하는것
	출력한 수 만큼의 int를 반환
	*/
}
