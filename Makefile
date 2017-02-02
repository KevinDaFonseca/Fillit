# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/22 16:11:43 by tlernoul          #+#    #+#              #
#    Updated: 2017/01/25 19:13:45 by tlernoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CFLAGS = -Wall -Wextra -Werror
Includes = ./includes/
SRC = main.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ) subsystem
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

subsystem:
	cd $(Includes) && $(MAKE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
