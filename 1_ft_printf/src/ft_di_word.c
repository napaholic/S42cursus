/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:27:28 by jaewkim           #+#    #+#             */
/*   Updated: 2021/04/11 22:09:14 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			ft_print_width(size_t max, size_t cnt_word, )

int				ft_di_word(t_flags *flags, char **input, int value_int)
{
	char			*value_di_string;
	char			*value_result;
	size_t			num_cnt;
	size_t			di_string_cnt;

	num_cnt = 0;
	value_di_string = ft_itoa(value_int);
	di_string_cnt = ft_strlen(value_di_string);
	num_cnt = flags->width > str_cnt ? flags->width : str_cnt;
	num_cnt = flags->dot > num_cnt ? flags->dot : num_cnt;
	ft_print_width(num_cnt, value_int, )
	//

	num_cnt =



	/*
	포맷에 맞게 데이터를 만들고 화면에 출력하고 출력한 수 많큼의 int를 반환.
	포맷에 맞게 데이터를 만드는것
	화면에출력하는것
	출력한 수 만큼의 int를 반환
	*/
}