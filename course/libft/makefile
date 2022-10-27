NAME = libft.a
all:
	gcc -Wall -Wextra -Werror -c ft_isalpha.c
	gcc -Wall -Wextra -Werror -c main.c
	gcc -o libft.a ft_isalpha.o main.o

clean:
	rm -f *.o

fclean: clean
	rm -f executable

re: fclean all