NAME	= libasm.a
SRC		= ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_strdup.s ft_read.s
OBJ_DIR	= objs/
OBJ		= ${addprefix ${OBJ_DIR}, ${SRC:.s=.o}}
${OBJ_DIR}%.o:srcs/%.s
		nasm -f macho64 $< -o $@ 

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
