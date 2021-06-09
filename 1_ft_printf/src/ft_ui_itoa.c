/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ui_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 21:19:07 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/05 21:38:02 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t		ft_estim(long n)
{
	size_t estim;

	estim = 0;
	if (n < 0)
	{
		estim++;
		n = -n;
	}
	while (n >= 1)
	{
		estim++;
		n /= 10;
	}
	return (estim);
}

static int			*ft_make_rtn(char *ui_str, long nbr, int len, int isnegative)
{
	if (nbr != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (ui_str = ft_strdup("0"));
	if (!ui_str)
		return (0);
	isnegative = 0;
	if (nbr < 0)
	{
		isnegative++;
		nbr = -nbr;
	}
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (isnegative == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nbr % 10) + '0';
	return (rtn);
}

char				*ft_u_itoa(unsigned int n)
{
	int		len;
	char	*ui_str;
	long	nbr;
	int		isnegative;

	nbr = n;
	len = ft_estim(nbr);
	rtn = 0;
	isnegative = 0;
	if (!(rtn = ft_make_rtn(rtn, nbr, len, isnegative)))
		return (0);
	return (ui_str);
}
