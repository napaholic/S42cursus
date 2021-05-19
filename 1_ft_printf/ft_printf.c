/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:48:10 by jaewkim           #+#    #+#             */
/*   Updated: 2021/04/11 17:22:11 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int				ft_setword(t_flag *flags, va_list ap)
{
	if (ft_strchr("di", flags->type))
		return (ft_di_word(flags, input, va_arg(ap, int)));
	if (ft_strchr("u", flags->type))
		return (ft_u_word(flags, input, ap));
	if (ft_strchr("xXp", flags->type))
		return ();
	if (ft_strchr("cs", flags->type))
		return ();
	if (ft_strchr("%", flags->type))
		return ();
	return (VALUE_ERROR);
}

void			ft_flag_figure(t_flags *flags, char **input, va_list ap)
{
	while(**input)
	{
		if (**input == '0' && flags->minus == 0 && flags->width == 0)
			flags->zero = 1;
		if (**input == '-')
			*flags = ft_flag_minus(*flags)
		if (**input == '.')
			ft_flag_dot(input, flags, ap);
		if (**input == '*')
			ft_flag_asterisk(flags, ap);
		if (ft_isdigit(**input))
			ft_flag_digit(**input, flags);
		if (ft_strchr("diuxXpcs%", **input))
		{
			flags->type = **input;
			++(*input);
			break ;
		}
		++(*input);
	}
	return ;
}

t_flags			ft_initflag(void)
{
	t_flags			flags;

	flags.dot = -1;
	flags.minus = 0;
	flags.type = 0;
	flags.asterisk = 0;
	flags.width = 0;
	flags.zero = 0;
	flags.nbyte = 0;
	return (flags);
}

int				ft_sign_figure(va_list ap, char *input)
{
	t_flags		flags;
	int			cnt_word;
	int			cnt;

	cnt = 0;
	while(*input)
	{
		if (*input == '%')
		{
			flags = ft_initflag();
			++input;
			ft_flag_figure(&flags, &input, ap);
			if ((cnt_word = ft_setword(&flags, ap)) == VALUE_ERROR)
				return (VALUE_ERROR);
			cnt += cnt_word;
		}
		else
		{
			ft_putchar_fd(*input++, 1);
			++cnt;
		}
	}
	return (cnt);
}

int				ft_printf(const char *input, ...)
{
	va_list			ap;
	int				nbyte;

	nbyte = 0;
	va_start(ap, input);
	nbyte += ft_sign_figure(ap, (char *)input) >= 0;
	va_end(ap);
	return (nbyte);
}
