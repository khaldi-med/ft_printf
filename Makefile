# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/08 03:24:35 by mohkhald          #+#    #+#              #
#    Updated: 2024/12/10 01:20:37 by mohkhald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_itoa.c ft_putstr_fd.c ft_putchar_fd.c\
   ft_strlen.c ft_str_to_hex.c ft_printf.c

NAME = libftprintf.a


OBJ = $(SRCS:.c=.o)


CC = cc


FLAGS = -Wall -Wextra -Werror


all: $(NAME)


%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re
