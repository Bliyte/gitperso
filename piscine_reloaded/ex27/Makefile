CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c
OBJS = $(SRCS:.c=.o)
TARGET = ft_display_file

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -I includes -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY : all clean fclean re