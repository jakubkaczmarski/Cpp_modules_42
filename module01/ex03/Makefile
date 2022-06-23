# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 17:22:54 by jkaczmar          #+#    #+#              #
#    Updated: 2022/06/23 20:23:30 by jkaczmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= violance
CC		= g++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS	= 	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re:	fclean all

.PHONY: all bonus fclean re