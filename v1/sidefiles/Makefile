NAME	:= push_swap
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror

HEADERS	:=\
		libft.h\
		push_swap.h

LIBFT	:= libft.a

SRCS	:=\
		main.c\
		errorcheck.c\
		get_a.c

all: $(NAME)

$(NAME): $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean

re: fclean all

.PHONY: all clean fclean re