LIBFT = ./libft/libft.a
NAME = libftprintf.a
CC = gcc
FLAGS = -c -Wall -Wextra -Werror
INCLUDES = -I./includes
SRCS = ft_printf.c \
		src/ft_di_word.c \
		src/ft_hexa_word.c \
		src/ft_p_word.c \
		src/ft_str_word.c \
		src/ft_treat_flag.c \
		src/ft_treat_util.c \
		src/ft_treat_util2.c \
		src/ft_ui_itoa.c \
		src/ft_uint_word.c \
		src/ft_ull_base.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all
