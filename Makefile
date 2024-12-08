
SRCS = ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c\
   ft_strlen.c ft_str_to_hex.c

NAME = libftprintf.a


OBJ = $(SRCS:.c=.o)


CC = cc


FLAGS = -Wall -Wextra -Werror


all: $(NAME)


%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re
