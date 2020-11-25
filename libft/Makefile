NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = $(SRC:.c=.o)

 $(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

 %.o: %.c
	$(CC) -I./includes -c $? $(CFLAGS)

 all: $(NAME)

 so:
	$(CC) -fPIC -I./includes -c $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

 clean:
	rm -f $(OBJ)

 fclean: clean
	rm -f $(NAME)

 re: fclean all

