# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 16:33:20 by hzhukov           #+#    #+#              #
#    Updated: 2022/11/07 18:29:53 by hzhukov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
AR		= ar rcs
RM		= rm -rf

SRC =	ft_isalpha.c \
		main.c \

OBJS = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus:
	$(BONUS_OBJ) $(AR) $(NAME) $(BONUS_OBJ)

clean:
	$(RM) $(OBJS) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus