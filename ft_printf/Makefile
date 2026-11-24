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
LIBFT_OBJS = libft/ft_atoi.o\
			libft/ft_lstadd_back.o\
			libft/ft_memchr.o\
			libft/ft_split.o\
			libft/ft_strncmp.o\
			libft/ft_bzero.o\
			libft/ft_lstadd_front.o\
			libft/ft_memcmp.o\
			libft/ft_strchr.o\
			libft/ft_strnstr.o\
			libft/ft_calloc.o\
			libft/ft_lstclear.o\
			libft/ft_memcpy.o\
			libft/ft_strdup.o\
			libft/ft_strrchr.o\
			libft/ft_isalnum.o\
			libft/ft_lstdelone.o\
			libft/ft_memmove.o\
			libft/ft_striteri.o\
			libft/ft_strtrim.o\
			libft/ft_isalpha.o\
			libft/ft_lstiter.o\
			libft/ft_memset.o\
			libft/ft_strjoin.o\
			libft/ft_substr.o\
			libft/ft_isascii.o\
			libft/ft_lstlast.o\
			libft/ft_putchar_fd.o\
			libft/ft_strlcat.o\
			libft/ft_tolower.o\
			libft/ft_isdigit.o\
			libft/ft_lstmap.o\
			libft/ft_putendl_fd.o\
			libft/ft_strlcpy.o\
			libft/ft_toupper.o\
			libft/ft_isprint.o\
			libft/ft_lstnew.o\
			libft/ft_putnbr_fd.o\
			libft/ft_strlen.o\
			libft/ft_itoa.o\
			libft/ft_lstsize.o\
			libft/ft_putstr_fd.o\
			libft/ft_strmapi.o\

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
