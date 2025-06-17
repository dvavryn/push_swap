NAME		:= push_swap
CC			:= cc
SRCS		:=	main.c \
				error.c \
				ex_op.c \
				free.c \
				get_stack.c \
				operations.c \
				print.c \
				sort.c
OBJS		:= $(SRCS:.c=.o)
LIBFT		:= ../libft/libft.a

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LIBFT) -g

all: $(NAME)

%.o: %.c
	$(CC) -c $< -o $@ -g

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re