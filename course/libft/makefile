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
		ft_bzero.c \
		ft_memcpy.c \
		ft_putchar_fd.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strdup.c \
		ft_strjoin.c \
		#ft_strtrim.c \
		#ft_split.c \
		#ft_itoa.c \
		#ft_strmapi.c \
		#ft_striteri.c \
		#ft_putstr_fd.c \
		#ft_putendl_fd.c \
		#ft_putnbr_fd.c \

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