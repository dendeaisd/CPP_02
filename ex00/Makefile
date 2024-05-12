# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvoicu <fvoicu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 13:34:21 by fvoicu            #+#    #+#              #
#    Updated: 2024/05/12 19:07:13 by fvoicu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	out
CC		:=	c++
FLAGS	:=	-Wall -Wextra -Werror -std=c++98
SRC		:=	main.cpp Fixed.cpp
OBJ		:=	$(SRC:.cpp=.o)

all 	: $(NAME)

$(NAME) : $(OBJ)
	@python3 anim.py &
	@ANIMATION_PID=$$!;
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@sleep 2.3  # Delay to ensure animation can be seen
	@touch stop_animation.txt
	@wait $$ANIMATION_PID 2>/dev/null

clean	:
	@echo "Cleaning object files..."
	@rm -rf $(OBJ)

fclean	: clean
	@echo "Full clean, removing executable..."
	@rm -f $(NAME)

re		: fclean all
	@echo "Rebuild completed."

.PHONY : all clean fclean re
