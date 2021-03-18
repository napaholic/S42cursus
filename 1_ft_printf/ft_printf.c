/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:48:10 by jaewkim           #+#    #+#             */
/*   Updated: 2021/03/19 05:33:12 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void			ft_setflag(t_flag *flag, char *input)
{

}

char			*ft_setting_process(t_flags *flag, char *input)
{
	while(*input)
}


int				ft_printf_process(va_list ap, char *input)
{
	t_flags			flag;

	while(*input)
	{
		if (*input == '%')
		{
			input = ft_setting_process(flag, input, ap);

		}
		else
		{
			ft_putchar(*input, 1);
			++input;
		}
	}
}

int				ft_printf(const char *input, ...)
{
	va_list			ap;
	int				nbyte;

	nbyte = 0;
	va_start(ap, input);
	nbyte += ft_printf_process(ap, (char *)input);
	va_end(ap);
	return (nbyte);
}
