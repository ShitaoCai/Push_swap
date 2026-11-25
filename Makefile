NAME = push_swap
CHECKER = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

INCLUDES = -Iincludes -Ilibft -Ift_printf

LIBFT_DIR = ./libft
PRINTF_DIR = ./ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

SRCS = main.c \
	src/operations/push.c \
	src/operations/reverse_rotate.c \
	src/operations/rotate.c \
	src/operations/swap.c \
	src/parsing/node_helpers.c \
	src/parsing/stack_helpers.c \
	src/sorting/simple_sort.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) $(LIBFT) -o $(NAME)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(PRINTF_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME) $(CHECKER)
	$(MAKE) -C $(PRINTF_DIR) fclean
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
