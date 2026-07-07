# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/05 15:09:29 by jtarvain          #+#    #+#              #
#    Updated: 2026/07/07 14:54:56 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:= a.out
HEADER			:= inc/Animal.hpp \
				   inc/Dog.hpp \
				   inc/Cat.hpp \
				   inc/WrongAnimal.hpp \
				   inc/WrongCat.hpp

CXX				:= c++
CXXFLAGS		:= -Wall -Wextra -Werror -I./inc std=c++17

SRC				:= main.cpp \
				   Animal.cpp \
				   Dog.cpp \
				   Cat.cpp \
				   WrongAnimal.cpp \
				   WrongCat.cpp
OBJ				:= $(addprefix obj/, $(notdir $(SRC:%.cpp=%.o)))

VPATH			:= src

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
