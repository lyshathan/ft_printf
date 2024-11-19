CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -rf

SRCS = ft_printf.c \
print_char.c \
print_hexa.c \
print_nbr.c \
print_ptr.c \
print_str.c \
print_unsigned_nbr.c

OBJS_DIR = objects
OBJS = $(SRCS:%.c=$(OBJS_DIR)/%.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(LIBFT) $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(NAME): $(OBJS_DIR) $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: %.c ft_printf.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make bonus -C $(LIBFT_PATH)
	cp $(LIBFT) $(NAME)

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJS) $(OBJS_DIR)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re