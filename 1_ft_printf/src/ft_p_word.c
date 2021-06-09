/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:25:17 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/08 17:25:52 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_in_put_part_pointer(char *pointer, t_flags flags)
{
	int char_cnt;

	char_cnt = 0;
	char_cnt += ft_putstrprec("0x", 2);
	if (flags.dot >= 0)
	{
		char_cnt += ft_treat_width(flags.dot, ft_strlen(pointer), 1);
		char_cnt += ft_putstrprec(pointer, flags.dot);
	}
	else
		char_cnt += ft_putstrprec(pointer, ft_strlen(pointer));
	return (char_cnt);
}

int			ft_treat_pointer(unsigned long long ull, t_flags flags)
{
	char	*pointer;
	int		char_cnt;

	char_cnt = 0;
	if (ull == 0 && flags.dot == 0)
	{
		char_cnt += ft_putstrprec("0x", 2);
		return (char_cnt += ft_treat_width(flags.width, 0, 1));
	}
	pointer = ft_ull_base(ull, 16);
	pointer = ft_str_tolower(pointer);
	if ((size_t)flags.dot < ft_strlen(pointer))
		flags.dot = ft_strlen(pointer);
	if (flags.minus == 1)
		char_cnt += ft_in_put_part_pointer(pointer, flags);
	char_cnt += ft_treat_width(flags.width, ft_strlen(pointer) + 2, 0);
	if (flags.minus == 0)
		char_cnt += ft_in_put_part_pointer(pointer, flags);
	free(pointer);
	return (char_cnt);
}
