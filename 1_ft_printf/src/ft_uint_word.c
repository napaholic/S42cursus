/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:36:19 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/07 09:40:28 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_in_put_part_uint(char *unsi_int, t_flags flags)
{
	int char_count;

	char_count = 0;
	if (flags.dot >= 0)
		char_count += ft_treat_width(flags.dot - 1, ft_strlen(unsi_int) - 1, 1);
	char_count += ft_putstrprec(unsi_int, ft_strlen(unsi_int));
	return (char_count);
}

static int	ft_put_part_uint(char *unsi_int, t_flags flags)
{
	int char_count;

	char_count = 0;
	if (flags.minus == 1)
		char_count += ft_in_put_part_uint(unsi_int, flags);
	if (flags.dot >= 0 && (size_t)flags.dot < ft_strlen(unsi_int))
		flags.dot = ft_strlen(unsi_int);
	if (flags.dot >= 0)
	{
		flags.width -= flags.dot;
		char_count += ft_treat_width(flags.width, 0, 0);
	}
	else
		char_count += ft_treat_width(flags.width,
		ft_strlen(unsi_int), flags.zero);
	if (flags.minus == 0)
		char_count += ft_in_put_part_uint(unsi_int, flags);
	return (char_count);
}

int				ft_ui_word(t_flags *flags, unsigned int uint)
{
	char			*unsign_int;
	int				char_cnt;

	char_cnt = 0;
	if (flags.dot == 0 && uint == 0)
	{
		char_cnt += ft_treat_width(flags.width, 0, 0);
		return (char_cnt);
	}
	unsign_int = ft_u_itoa(uint);
	char_cnt += ft_put_part_uint(unsign_int, flags);
	free(unsign_int);
	return (char_cnt);
}
