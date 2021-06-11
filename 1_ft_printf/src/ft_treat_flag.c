/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 01:56:28 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/12 06:17:10 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void				ft_flag_minus(t_flags *flags)
{
	flags->zero = 0;
	flags->minus = 1;
	return ;
}

void
ft_flag_dot(char **input, t_flags *flags, va_list ap)
{
	++(*input);
	if (**input == '*')
	{
		flags->dot = va_arg(ap, int);
		++(*input);
	}
	else
	{
		flags->dot = 0;
		while (ft_isdigit(**input))
		{
			flags->dot = (flags->dot * 10) + (**input - '0');
			++(*input);
		}
	}
	return ;
}

void				ft_flag_asterisk(t_flags *flags, va_list ap)
{
	flags->asterisk = 1;
	flags->width = va_arg(ap, int);
	if (flags->width < 0)
	{
		flags->minus = 1;
		flags->width *= -1;
		flags->zero = 0;
	}
	return ;
}

void				ft_flag_digit(char c, t_flags *flags)
{
	if (flags->asterisk == 1)
		flags->width = 0;
	flags->width = (flags->width * 10) + (c - '0');
	return ;
}
