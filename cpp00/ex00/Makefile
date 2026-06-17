# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/28 12:25:28 by jtarvain          #+#    #+#              #
#    Updated: 2026/06/17 11:31:46 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= megaphone
CFLAGS	:= -Wall -Wextra -Werror
SRC		:= megaphone.cpp
OBJ		:= $(addprefix obj/, $(notdir $(SRC:%.cpp=%.o)))
VPATH	:= src

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
