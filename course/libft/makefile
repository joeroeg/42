# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 16:33:20 by hzhukov           #+#    #+#              #
#    Updated: 2022/11/15 21:41:45 by hzhukov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
OBJ_DIR	= objs/

CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
AR		= ar rcs
RM		= rm -rf

SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		main.c \
		#ft_memset.c \

OBJS = $(SRC:.c=.o)


#BONUS_OBJ = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): ;{OBJ_DIR} $(OBJS)
	$(AR) $@ $(OBJS)

#bonus:
#	$(BONUS_OBJ) $(AR) $(NAME) $(BONUS_OBJ)

clean:
	$(RM) $(OBJ_DIR) 
#$(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus