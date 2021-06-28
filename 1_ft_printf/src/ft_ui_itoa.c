/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ui_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 21:19:07 by jaewkim           #+#    #+#             */
/*   Updated: 2021/06/13 18:46:00 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	ft_estim(long n)
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

static char		*ft_make_rtn(char *ui_str, long nbr, int len, int isnegative)
{
	if (nbr != 0)
		ui_str = malloc(sizeof(char) * (len + 1));
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
	ui_str[len] = '\0';
	while (--len)
	{
		ui_str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (isnegative == 1)
		ui_str[0] = '-';
	else
		ui_str[0] = (nbr % 10) + '0';
	return (ui_str);
}

char			*ft_ui_itoa(unsigned int n)
{
	int		len;
	char	*ui_str;
	long	nbr;
	int		isnegative;

	nbr = n;
	len = ft_estim(nbr);
	ui_str = 0;
	isnegative = 0;
	if (!(ui_str = ft_make_rtn(ui_str, nbr, len, isnegative)))
		return (0);
	return (ui_str);
}
