/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:37:56 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/19 20:24:49 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					chk_newline(char *str)
{
	int				rst;

	rst = 0;
	while (*str)
	{
		if (*str++ == '\n')
			rst = 1;
	}
	return (rst);
}

int					get_next_line(int fd, char **line)
{
	static char		*prevbuf[OPEN_MAX];
	char			buf[BUFFER_SIZE + 1];
	char			*tmp;
	int				byte_read;
	int				idx;

	if ((fd < 0) || (line == NULL) || (BUFFER_SIZE <= 0))
		return (-1);
	while ((byte_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		
	}
	return (0);
}
