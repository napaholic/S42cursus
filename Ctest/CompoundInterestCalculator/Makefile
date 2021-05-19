# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewkim <jaewkim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/24 16:27:34 by mjay              #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2021/01/12 12:51:20 by jaewkim          ###   ########.fr        #
=======
#    Updated: 2021/01/14 11:36:13 by mjay             ###   ########.fr        #
>>>>>>> d76b9ff314e6d52fef0cfe5a5f518fd6bf48f7f8
#                                                                              #
# **
# ************************************************************************* #

NAME	= libft.a
AR = ar
RC = rc
ARFLAGS = crs
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RMFLAG 	= -f
INCLUDES = ./libft.h
RM		 = rm -f

SRC_P1 	= ./CompoundInterestCalculator.c \
	./ft_atoi.c

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
		$(SRC_P1)0/________________________________________________________________

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
