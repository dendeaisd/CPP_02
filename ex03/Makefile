# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvoicu <fvoicu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 15:25:50 by fvoicu            #+#    #+#              #
#    Updated: 2024/05/12 16:37:17 by fvoicu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	out
CC		:=	c++
FLAGS	:=	-Wall -Wextra -Werror -std=c++98
SRC		:=	main.cpp bsp.cpp Point.cpp Fixed.cpp
OBJ		:=	$(SRC:.cpp=.o)

all 	: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm -f $(NAME)

re		: fclean all

.PHONY : all clean fclean re