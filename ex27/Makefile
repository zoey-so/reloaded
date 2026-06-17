CC = cc
CFLAGS += -Wall -Wextra -Werror
NAME = ft_display_file
SRC = ft_display_file.c


all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME).o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
