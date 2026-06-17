# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/17 06:50:09 by jtarvain          #+#    #+#              #
#    Updated: 2026/06/17 07:06:40 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= braiinz
CFLAGS	:= c++ -Wall -Wextra -Werror -I./include

HEADER	:= include/Zombie.hpp
SRC		:= main.cpp \
		   Zombie.cpp \
		   newZombie.cpp \
		   randomChump.cpp \
OBJ		:= $(addprefix obj/, $(notdir$(SRC:%.cpp=%.o)))

all: $(NAME)

$(NAME): $(OBJ)
	$(CFLAGS) $(OBJ) -o $(NAME)

obj:
	mkdir -p obj

obj/%.o: %.cpp $(HEADER) | obj
	$(CFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
