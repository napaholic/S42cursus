/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 01:56:28 by jaewkim           #+#    #+#             */
/*   Updated: 2021/04/10 14:25:53 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_flags				ft_flag_minus(t_flags flags)
{
	flags.zero = 0;
	flags.minus = 1;
	return (flags);
}

void				ft_flag_dot(const char **input, t_flags *flags, va_list ap)
{
	++(*input);
	if (**input == '*')
	{
		flags->dot = va_arg(ap, int);
		++(*input);
	}
	else if(**input == '-')
	{
		flags->dot = -1;
		++(*input);
		while(ft_isdigit(**input))
			++(*input);
	}
	else
	{
		flags->dot = 0;
		if (ft_isdigit(**input))
		{
			while (ft_isdigit(**input))
			{
				flags->dot = (flags->dot * 10) + (**input - '0');
				++(*input);
			}
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
	}
	return ;
}

void				ft_flag_digit(char c, t_flags *flags)
{
	if (flags->asterisk == 1)
		flags->asterisk = 0;
	flags->width = (flags->asterisk * 10) + (c - '0');
	return ;
}
