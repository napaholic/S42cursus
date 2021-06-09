/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:59:49 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/09 16:37:32 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

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
//./ft_printf
int					ft_printf(const char *str, ...);
//./src/ft_treat_flag
t_flags				ft_flag_minus(t_flags flags);
void				ft_flag_dot(const char **input, t_flags *flags, va_list ap);
void				ft_flag_asterisk(t_flags *flags, va_list ap);
void				ft_flag_digit(char c, t_flags *flags);
//./src/ft_di_word
int					ft_di_word(t_flags *flags, int value_int);
//./src/ft_treat_util
int					ft_treat_width(int width, int minus, int zero);
int					ft_putstrprec(char *str, int prec);
int					ft_putchar(int c);
char				*ft_str_tolower(char *str);
int					ft_treat_char(char c, t_flags flags);
//./src/ft_treat_uint
int					ft_ui_word(t_flags *flags, unsigned int uint);
//./src/ft_str_word
int					ft_str_word(char *str, t_flags flags);
//./src/ft_hexa_word.c
int					ft_hexa_word(unsigned int uint, int lower, t_flags flags);
//./src/ft_ull_base.c
char				*ft_ull_base(unsigned long long ull, int base);
//./src/ft_treat_util2.c
int					ft_treat_percent(t_flags *flags)
