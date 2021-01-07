/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 00:04:31 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/07 01:18:05 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	idx;
	char			*result;

	if (s == NULL || f == NULL)
		return (NULL);
	if ((result = malloc((ft_strlen(s) + 1) * sizeof(char))) == NULL)
		return (NULL);
	idx = 0;
	while (*(s + idx) != '\0')
	{
		*(result + idx) = f(idx, *(s + 1));
		++idx;
	}
	*(result + idx) = '\0';
	return (result);
}
