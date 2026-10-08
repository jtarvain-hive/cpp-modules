# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/29 16:15:42 by jtarvain          #+#    #+#              #
#    Updated: 2026/09/30 09:42:05 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= a.out
HEADER		:= Bureaucrat.hpp
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror
SRC			:= main.cpp Bureaucrat.cpp
OBJ			:= $(addprefix obj/, $(notdir $(SRC:%.cpp=%.o)))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -I. $(OBJ) -o $(NAME)

obj:
	mkdir -p obj

obj/%.o: %.cpp | $(HEADER) obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: obj
