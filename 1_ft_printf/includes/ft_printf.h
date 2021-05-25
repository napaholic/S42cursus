/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:59:49 by jaewkim           #+#    #+#             */
/*   Updated: 2021/05/25 21:04:29 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"
# include "../"

# define VALUE_ERROR -1

typedef struct s_flags
{
	int				nbyte;
	int				width;
	int				minus;
	int				zero;
	int				dot;
	int				asterisk;
	int				type;
}					t_flags;

int					ft_printf(const char *str, ...);

t_flags				ft_flag_minus(t_flags flags);
void				ft_flag_dot(const char **input, t_flags *flags, va_list ap);
void				ft_flag_asterisk(t_flags *flags, va_list ap);
void				ft_flag_digit(char c, t_flags *flags);

int				ft_di_word(t_flags *flags, int value_int)
