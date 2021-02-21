/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:37:56 by jaewkim           #+#    #+#             */
/*   Updated: 2021/02/09 20:48:29 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					chk_newline(char *str)
{
	int				idx;

	if (str == NULL)
		return (F_FAIL);
	idx = 0;
	while (str[idx])
	{
		if (str[idx] == '\n')
			return (idx);
		++idx;
	}
	return (F_FAIL);
}

int					splited_line(char **backup, int idx_str, char **line)
{
	char			*tmp;

	if (idx_str < 0)
		return (F_FAIL);
	(*backup)[idx_str] = '\0';
	*line = ft_strdup(*backup);
	if (!ft_strlen(&(*backup)[idx_str + 1]))
	{
		free(*backup);
		*backup = NULL;
		return (F_SUCCESS);
	}
	tmp = ft_strdup(&(*backup)[idx_str + 1]);
	free(*backup);
	*backup = tmp;
	return (F_SUCCESS);
}

int					read_after_all(char **backup, int size_read, char **line)
{
	int				idx;

	if (*backup && (idx = chk_newline(*backup)) > 0)
		return (splited_line(backup, idx, line));
	else if(*backup)
	{
		*line = *backup;
		*backup = NULL;
		return (F_EOF);
	}
	*line = ft_strdup("");
	return (F_SUCCESS);
}

int					get_next_line(int fd, char **line)
{
	static char		*backup[OPEN_MAX];
	char			buf[BUFFER_SIZE + 1];
	int				size_read;
	int				idx_str;

	idx_str = 0;
	if ((fd < 0) || (line == NULL) || (BUFFER_SIZE <= 0))
		return (F_FAIL);
	while ((size_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[size_read] = '\0';
		backup[fd] = ft_strjoin(backup[fd], buf);
		if ((idx_str = chk_newline(backup[fd])) >= 0)
			return (splited_line(&backup[fd], idx_str, line));
	}
	return (read_after_all(&backup[fd], size_read, line));
}

int					main()
{
	int fd;
	int gnl;
	char *line;

	fd = open("./test.txt", O_RDWR);
	printf("%d\n", fd);
	gnl = get_next_line(fd, &line);
	printf("%s\n", line);
	gnl = get_next_line(fd, &line);
	printf("%d\n", fd);
	printf("%s\n", line);
	gnl = get_next_line(fd, &line);
	printf("%s\n", line);
	gnl = get_next_line(fd, &line);
	printf("%s\n", line);
	return 0;
}
