LIBFT = ./libft/libft.a

NAME = libftprintf.a

SRCS =  ft_printf.c \
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

SRCS_O =	ft_di_word.o \
			ft_hexa_word.o \
			ft_p_word.o \
			ft_str_word.o \
			ft_treat_flag.o \
			ft_treat_util.o \
			ft_treat_util2.o \
			ft_ui_itoa.o \
			ft_uint_word.o \
			ft_ull_base.o

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(MAKE) all -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rc $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SRCS_O)
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re: fclean all
