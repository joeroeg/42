NAME            =   ircserv
SRC_DIRECT      =   src
MY_SOURCES      =   $(shell find $(SRC_DIRECT) -name "*.cpp")
CC              =   c++
CCFLAGS         =   -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
DEBUG_FLAGS     =   -g -DDEBUG

all: $(NAME)

$(NAME): $(MY_SOURCES)
	@$(CC) $(CCFLAGS) -o $(NAME) $(MY_SOURCES)

run: $(NAME)
	./$(NAME) 6667 patate

debug: CCFLAGS += $(DEBUG_FLAGS)
debug: re run

kill:
	lsof -i :6667 | awk 'NR > 1 {print $$2}' | xargs kill -9

test: all
	./tests.sh

clean:
	rm -f *.o
	rm -rf *.dSYM

fclean:         clean
	rm -f $(NAME) test

tclean:
	rm -f irc_commands.log server.log user1_commands.log user2_commands.log

re:             fclean $(NAME)

.PHONY: all clean fclean re
