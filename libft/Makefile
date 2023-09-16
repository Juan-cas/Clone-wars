CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = *.c
OBJ = $(SRC:.c=.o)
RM = rm -f

$(NAME): $(OBJ)
	ar	rcs	$(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM)	$(OBJ)

fclean: clean
	$(RM)	$(NAME)

re: fclean all
