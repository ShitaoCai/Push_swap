NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = 	ft_printf.c\
		ft_print_char.c\
		ft_print_number.c\
		ft_print_hex.c\
		ft_printf_utils.c\

OBJS = $(SRCS:.c=.o)
LIBFT_OBJS = $(LIBFT_DIR)/ft_atoi.o\
			$(LIBFT_DIR)/ft_lstadd_back.o\
			$(LIBFT_DIR)/ft_memchr.o\
			$(LIBFT_DIR)/ft_split.o\
			$(LIBFT_DIR)/ft_strncmp.o\
			$(LIBFT_DIR)/ft_bzero.o\
			$(LIBFT_DIR)/ft_lstadd_front.o\
			$(LIBFT_DIR)/ft_memcmp.o\
			$(LIBFT_DIR)/ft_strchr.o\
			$(LIBFT_DIR)/ft_strnstr.o\
			$(LIBFT_DIR)/ft_calloc.o\
			$(LIBFT_DIR)/ft_lstclear.o\
			$(LIBFT_DIR)/ft_memcpy.o\
			$(LIBFT_DIR)/ft_strdup.o\
			$(LIBFT_DIR)/ft_strrchr.o\
			$(LIBFT_DIR)/ft_isalnum.o\
			$(LIBFT_DIR)/ft_lstdelone.o\
			$(LIBFT_DIR)/ft_memmove.o\
			$(LIBFT_DIR)/ft_striteri.o\
			$(LIBFT_DIR)/ft_strtrim.o\
			$(LIBFT_DIR)/ft_isalpha.o\
			$(LIBFT_DIR)/ft_lstiter.o\
			$(LIBFT_DIR)/ft_memset.o\
			$(LIBFT_DIR)/ft_strjoin.o\
			$(LIBFT_DIR)/ft_substr.o\
			$(LIBFT_DIR)/ft_isascii.o\
			$(LIBFT_DIR)/ft_lstlast.o\
			$(LIBFT_DIR)/ft_putchar_fd.o\
			$(LIBFT_DIR)/ft_strlcat.o\
			$(LIBFT_DIR)/ft_tolower.o\
			$(LIBFT_DIR)/ft_lstmap.o\
			$(LIBFT_DIR)/ft_putendl_fd.o\
			$(LIBFT_DIR)/ft_strlcpy.o\
			$(LIBFT_DIR)/ft_toupper.o\
			$(LIBFT_DIR)/ft_isprint.o\
			$(LIBFT_DIR)/ft_lstnew.o\
			$(LIBFT_DIR)/ft_putnbr_fd.o\
			$(LIBFT_DIR)/ft_strlen.o\
			$(LIBFT_DIR)/ft_itoa.o\
			$(LIBFT_DIR)/ft_lstsize.o\
			$(LIBFT_DIR)/ft_putstr_fd.o\
			$(LIBFT_DIR)/ft_strmapi.o\

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(AR) $(ARFLAGS) $(NAME) $(LIBFT_OBJS) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re 
