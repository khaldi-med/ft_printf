# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/08 03:24:35 by mohkhald          #+#    #+#              #
#    Updated: 2024/12/08 03:29:15 by mohkhald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_itoa.c ft_atoi.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c\
   ft_strlen.c ft_str_to_hex.c

NAME = libftprintf.a


OBJ = $(SRCS:.c=.o)


CC = cc


FLAGS = -Wall -Wextra -Werror


all: $(NAME)


%.o: %.c libftprintf.h
	$(CC) $(FLAGS) -c $< -o $@


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re
