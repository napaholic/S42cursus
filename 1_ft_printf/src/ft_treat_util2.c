/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_util2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 21:15:15 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/05 21:17:49 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int				ft_treat_percent(t_flags *flags)
{
	int char_cnt;

	char_cnt = 0;
	if (flags->minus == 1)
		char_cnt += ft_putstrprec("%", 1);
	char_cnt += ft_treat_width(flags->width, 1, flags->zero);
	if (flags->minus == 0)
		char_cnt += ft_putstrprec("%", 1);
	return (char_cnt);
}
