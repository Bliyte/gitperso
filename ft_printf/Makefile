CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_print_c.c \
	ft_print_di.c \
	ft_print_p.c \
	ft_print_s.c \
	ft_print_u.c \
	ft_print_x.c \
	ft_print_X.c \
	ft_printf.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs -o $@ $^

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
