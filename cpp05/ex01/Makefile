# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/29 16:15:42 by jtarvain          #+#    #+#              #
#    Updated: 2026/10/08 11:06:38 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= a.out
HEADER		:= inc/Bureaucrat.hpp
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -Iinc
SRC			:= main.cpp Bureaucrat.cpp
OBJ			:= $(addprefix obj/, $(SRC:%.cpp=%.o))
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
.SECONDARY: obj
