NAME	= libft.a
CC		= gcc
CFALGS	= -Wall -Wextra -Werror
PFLAGS	= -iquote ../libft

SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		#ft_bzero.c \
		#ft_memcpy.c \
		#ft_memmove \
		#ft_strlcpy \
		#ft_strlcat \
		#ft_toupper \
		#ft_tolower \
		#ft_strchr \
		#ft_strrchr \
		#ft_strncmp \
		#ft_memchr \
		#ft_memcmp \
		#ft_strnstr \
		#ft_atoi \
		#ft_calloc \
		#ft_calloc \
		#ft_substr \
		#ft_strjoin \
		#ft_strtrim \
		#ft_split \
		#ft_itoa \
		#ft_strmapi \
		#ft_striteri \
		#ft_putchar_fd \
		#ft_putstr_fd \
		#ft_putendl_fd \
		#ft_putnbr_fd \

OBJ_DIR	= objs/
OBJ		= ${addprefix ${OBJ_DIR}, ${SRC:.c=.o}}
${OBJ_DIR}%.o:srcs/%.c
		gcc ${PFLAGS} ${CFALGS} -c $< -o $@ 

${NAME}:${OBJ_DIR} ${OBJ}
		ar -rcs $@ ${OBJ}

${OBJ_DIR}:
		mkdir -p ${OBJ_DIR}

all:	${NAME}

clean:
		rm -rf ${OBJ_DIR}

fclean:	clean
		rm -rf ${NAME}

re:		fclean all

.PHONY: all clean fclean re