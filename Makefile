NAME	:= push_swap

CC		:= cc

CFLAGS	:= -Wall -Wextra -Werror

SRCS	:=	\
		error.c \
		ex_op.c \
		free.c \
		get_stack.c \
		isempty.c \
		main.c \
		operations.c \
		sort_five.c \
		sort_utils.c \
		sort.c \

OBJS	:= $(SRCS:.c=.o)

$(NAME)	: $(OBJS)
	@make -C libft
	@$(CC) $(CFLAGS) $(OBJS) -L./libft -lft -o $(NAME) -g

all		: $(NAME)

%.o		: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ -g

clean	:
	@make clean -C libft
	@rm -f $(OBJS)

fclean	: clean
	@make fclean -C libft
	@rm -f $(NAME)

re		: fclean all

.PHONY: all clean fclean re