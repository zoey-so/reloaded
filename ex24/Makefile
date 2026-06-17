CC = cc
CFLAGS += -Wall -Wextra -Werror -I includes
SRC = srcs
SOURCES = $(SRC)/ft_putchar.c \
			$(SRC)/ft_swap.c \
			$(SRC)/ft_putstr.c \
			$(SRC)/ft_strlen.c \
			$(SRC)/ft_strcmp.c
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(SRC)/%.o: $(SRC)/%.c includes/ft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
