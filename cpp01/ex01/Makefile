# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/17 06:50:09 by jtarvain          #+#    #+#              #
#    Updated: 2026/06/17 09:04:08 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= moarbraiinz
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -I./include

HEADER		:= include/Zombie.hpp
SRC			:= main.cpp \
		   zombieHorde.cpp \
		   Zombie.cpp
OBJ			:= $(addprefix obj/, $(notdir $(SRC:%.cpp=%.o)))
VPATH		:= src

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

obj:
	mkdir -p obj

obj/%.o: %.cpp $(HEADER) | obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
