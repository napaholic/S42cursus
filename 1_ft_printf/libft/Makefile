# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/24 16:27:34 by mjay              #+#    #+#              #
#    Updated: 2021/06/15 16:24:00 by jaewkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
AR = ar
RC = rc
ARFLAGS = crs
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RMFLAG 	= -f
INCLUDES = ./libft.h
RM		 = rm -f

SRC_P1 	= ./ft_memset.c	\
	./ft_bzero.c	\
	./ft_memcpy.c	\
	./ft_memccpy.c	\
	./ft_memmove.c	\
	./ft_memchr.c	\
	./ft_memcmp.c	\
	./ft_calloc.c	\
	./ft_strlen.c	\
	./ft_strlcpy.c	\
	./ft_strlcat.c	\
	./ft_strchr.c	\
	./ft_strrchr.c	\
	./ft_strncmp.c	\
	./ft_strnstr.c	\
	./ft_strdup.c	\
	./ft_isdigit.c	\
	./ft_atoi.c		\
	./ft_isalpha.c	\
	./ft_isalnum.c	\
	./ft_isascii.c	\
	./ft_isprint.c	\
	./ft_toupper.c	\
	./ft_tolower.c

SRC_P2 = \
	./ft_substr.c	\
	./ft_strjoin.c	\
	./ft_strtrim.c	\
	./ft_split.c	\
	./ft_itoa.c		\
	./ft_strmapi.c	\
	./ft_putchar_fd.c	\
	./ft_putstr_fd.c	\
	./ft_putendl_fd.c	\
	./ft_putnbr_fd.c

SRC_BONUS = \
		./ft_lstnew.c \
		./ft_lstsize.c \
		./ft_lstlast.c \
		./ft_lstadd_back.c \
		./ft_lstadd_front.c \
		./ft_lstdelone.c \
		./ft_lstclear.c \
		./ft_lstiter.c \
		./ft_lstmap.c

SRCS 	= \
		$(SRC_P1)	\
		$(SRC_P2)

OBJS	= $(SRCS:.c=.o)

BOBJS	= $(SRC_BONUS:.c=.o)

all	:	$(NAME)

bonus: $(BOBJS) $(OBJS)
		$(AR) $(RC) $(NAME) $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.c.o : $(SRCS) $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.PHONY : clean fclean re bonus all
