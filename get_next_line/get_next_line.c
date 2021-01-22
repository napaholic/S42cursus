/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:37:56 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/22 10:29:32 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					chk_newline(char *str)
{
	int				idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] == '\n')
			return (idx);
		++idx;
	}
	return (-1);
}

int				splited_line(char **backup, int idx_str, char **line)
{
	char		*tmp;

	(*backup)[idx_str] = '\0';
	*line = ft_strdup(*backup);
	if (!ft_strlen(&(*backup)[idx_str + 1]))
	{
		free(*backup);
		*backup = NULL;
		return (1);
	}
	tmp = ft_strdup(&(*backup)[idx_str + 1]);
	free(*backup);
	*backup = tmp;

	return (1);
}

int					read_after_all(char **backup, int size_read, char **line)
{
	int				idx;

	
	return 0;
}

int					get_next_line(int fd, char **line)
{
	static char		*backup[OPEN_MAX];
	char			buf[BUFFER_SIZE + 1];
	char			*tmp;
	int				size_read;
	int				idx_str;

	if ((fd < 0) || (line == NULL) || (BUFFER_SIZE <= 0))
		return (-1);
	while ((size_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[size_read] = '\0';
		backup[fd] = ft_strjoin(backup[fd], buf);
		if ((idx_str = chk_newline(backup[fd])) >= 0)
			return (splited_line(backup[fd], idx_str, *line));
	}
	return (0);
}
