NAME = display_file

SRC = display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) display_file.o

clean:
	/bin/rm -f display_file.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
