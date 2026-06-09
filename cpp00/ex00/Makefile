# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/28 12:25:28 by jtarvain          #+#    #+#              #
#    Updated: 2026/06/09 17:43:42 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= megaphone
CFLAGS	:= -Wall -Wextra -Werror
SRC		:= src/megaphone.cpp
OBJ		:= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

obj:
	mkdir -p obj

obj/%.o: %.cpp | obj
	c++ $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
