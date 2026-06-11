# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/09 18:45:53 by jtarvain          #+#    #+#              #
#    Updated: 2026/06/11 22:21:14 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= phonebook
HEADER	:= include/PhoneBook.hpp include/Contact.hpp

CFLAGS	:= -Wall -Wextra -Werror
CC		:= c++
SRC		:= src/main.cpp \
		src/PhoneBook.cpp \
		src/Contact.cpp 
OBJ		:= $(SRC:%.c=obj/%.o)


all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

obj/%.o: src/%.c $(HEADER) | obj
	$(CC) $(CFLAGS) $(OBJ) -c $< -o $@

obj:
	mkdir -p obj

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: make all clean fclean re
