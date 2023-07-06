NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc

SRC = 	ft_printf.c \
		ft_parse.c \
		ft_parse_hex.c \
		functions.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -c
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all