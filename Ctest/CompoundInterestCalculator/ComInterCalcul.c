/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ComInterCalcul.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:02:50 by mjay              #+#    #+#             */
/*   Updated: 2021/04/14 11:57:07 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int			main(int ac, char **argv)
{
	long long			seedNumber;
	long long			kimchi;
	long long			cnt;
	long long			idx;
	long long			result;

	result = 0;
	idx = 0;
	seedNumber = ft_atoi(argv[1]);
	kimchi = ft_atoi(argv[2]);
	cnt = ft_atoi(argv[3]);

printf("시드머니가 %lld 이고, 현재 김프가 %lld일 경우\n", seedNumber, kimchi);
	while (idx++ < cnt)
	{
		kimchi *= 0.01;
		result = seedNumber * (1 + kimchi);
		printf("%lld 회 차일때 : %lld\n", idx, result);
	}
	return (int)result;
}
