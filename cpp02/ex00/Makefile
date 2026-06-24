# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/24 00:51:02 by jtarvain          #+#    #+#              #
#    Updated: 2026/06/24 01:10:10 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= a.out
HEADER		:= include/Fixed.hpp

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -I./include

SRC			:= main.cpp \
			   Fixed.cpp
OBJ			:= $(addprefix obj/, $(notdir $(SRC:%.cpp=%.o)))

VPATH		:= src

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

obj:
	mkdir -p obj

obj/%o: %.cpp $(HEADER) | obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJ) obj
