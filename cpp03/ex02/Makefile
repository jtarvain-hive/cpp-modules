# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/03 01:59:09 by jtarvain          #+#    #+#              #
#    Updated: 2026/07/04 23:29:23 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= a.out
HEADER		:= include/ClapTrap.hpp include/ScavTrap.hpp include/FragTrap.hpp

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -I./include -std=c++17
SRC			:= main.cpp \
			   ClapTrap.cpp \
			   ScavTrap.cpp \
			   FragTrap.cpp
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
.SECONDARY: $(OBJ) obj
