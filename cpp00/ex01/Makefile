# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/09 18:45:53 by jtarvain          #+#    #+#              #
#    Updated: 2026/06/17 12:33:22 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= phonebook
HEADER	:= include/PhoneBook.hpp include/Contact.hpp

CFLAGS	:= -Wall -Wextra -Werror -I./include
CC		:= c++
SRC		:= src/main.cpp \
		src/PhoneBook.cpp \
		src/Contact.cpp 
OBJ		:= $(addprefix obj/, $(notdir $(SRC:.cpp=.o)))
VPATH	:= src


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

obj/%.o: %.cpp $(HEADER) | obj
	$(CC) $(CFLAGS) -c $< -o $@

obj:
	mkdir -p obj

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
