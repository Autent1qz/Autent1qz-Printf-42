# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 01:01:04 by jcharfao          #+#    #+#              #
#    Updated: 2024/02/28 07:47:13 by jcharfao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

AR = ar crs

SRC = ft_printf.c\
ft_putchar.c\
ft_putstr.c\
ft_putnbr.c\

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)
		
all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re