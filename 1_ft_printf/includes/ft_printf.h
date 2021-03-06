/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:59:49 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/15 16:23:10 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

# define VALUE_ERROR -1

typedef struct		s_flags
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

void				ft_flag_minus(t_flags *flags);
void				ft_flag_dot(char **input, t_flags *flags, va_list ap);
void				ft_flag_asterisk(t_flags *flags, va_list ap);
void				ft_flag_digit(char c, t_flags *flags);

int					ft_di_word(t_flags *flags, int value_int);

int					ft_treat_width(int width, int minus, int zero);
int					ft_putstrprec(char *str, int prec);
int					ft_putchar(int c);
char				*ft_str_tolower(char *str);
int					ft_treat_char(char c, t_flags *flags);

int					ft_ui_word(t_flags *flags, unsigned int uint);

int					ft_str_word(char *str, t_flags *flags);

int					ft_hexa_word(unsigned int uint, int lower, t_flags *flags);

char				*ft_ull_base(unsigned long long ull, int base);

int					ft_treat_percent(t_flags *flags);

int					ft_p_word(unsigned long long ull, t_flags *flags);

char				*ft_ui_itoa(unsigned int n);
#endif
