CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
TARGET = libft.a

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar rcs -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -I includes -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY : all clean fclean re