/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:25:54 by jaewkim           #+#    #+#             */
/*   Updated: 2021/01/19 20:46:18 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 512
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 256
# endif

int				get_next_line(int fd, char **line);

size_t			ft_strlen(const char *str);

char			*ft_strdup(const char *s1);

char			*ft_strjoin(char *s1, char *s2);

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);

#endif
