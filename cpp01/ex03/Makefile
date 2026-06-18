# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/18 17:31:26 by jtarvain          #+#    #+#              #
#    Updated: 2026/06/18 17:43:35 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= violence
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -I.include/

HEADERS		:= include/Weapon.hpp \
			   include/HumanA.hpp \
			   include/HumanB.hpp

SRC			:= main.cpp \
			   Weapon.cpp \
			   HumanA.cpp \
			   HumanB.cpp

OBJ			:= $(addprefix obj/, $(notdir $(SRC:%.cpp=%.o)))
VPATH		:= src

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf obj

fclean: clean
	rf -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJ)
