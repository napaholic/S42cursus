/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:25:54 by jaewkim           #+#    #+#             */
/*   Updated: 2021/02/09 20:48:02 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 512
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 256
# endif

# define F_EOF 0
# define F_SUCCESS 1
# define F_FAIL -1

int				get_next_line(int fd, char **line);

size_t			ft_strlen(const char *str);

char			*ft_strdup(const char *s1);

char			*ft_strjoin(char const	*s1, char const	*s2);

void			*ft_memcpy(void *dst, const void *src, size_t count);
#endif
