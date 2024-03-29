# Names of the programs
NAME    = push_swap
LIBFT   = libft.a
LDIR    = libft/
SDIR    = src/
ODIR    = obj/

# Compiler and flags
CC      = gcc
CFLAGS  = -Wall -Werror -Wextra -g
RM      = rm -f

# Source and Object Files
SRCS    = $(addprefix $(SDIR), main.c) \
          $(addprefix $(SDIR)operations/, push.c reverse_rotate.c rotate.c swap.c) \
		  $(addprefix $(SDIR)utilities/, utilities.c list_functions.c index.c validate_arguments.c) \
		  $(addprefix $(SDIR)algorithms/, radix_sort.c simple_sort.c simple_sort_3_operations.c simple_sort_3_helpers.c simple_sort_helpers.c)
OBJS    = $(patsubst $(SDIR)%.c,$(ODIR)%.o,$(SRCS))

# Default rule
all: libft $(NAME)
	@echo "push_swap compiled"


# Compilation rules for the main program
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LDIR)$(LIBFT)


# Compilation rules for the object files
$(ODIR)%.o: $(SDIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

$(ODIR)%.o: $(SDIR)operations/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

$(ODIR)%.o: $(SDIR)utilities/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

$(ODIR)%.o: $(SDIR)algorithms/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

# $(ODIR)%.o: $(BONUS_DIR)%.c
# 	@mkdir -p $(ODIR)
# 	@$(CC) $(CFLAGS) -c $< -o $@

# Compiling libft
libft:
	@echo "compiling libft"
	@$(MAKE) -C $(LDIR)

# Cleaning up
clean:
	@$(RM) $(OBJS) $(OBJS_B)
	@make -C $(LDIR) clean
	@echo "cleaned up object files"

fclean: clean
	@$(RM) $(NAME) $(NAME_B)
	@make -C $(LDIR) fclean
	@echo "cleaned up all files"

# Re-compiling
re: fclean all

run:
	@make
	@./run.sh

# Phony rules to avoid conflicts
.PHONY: all libft clean fclean re run bonus
