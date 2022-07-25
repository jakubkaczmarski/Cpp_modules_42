# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 17:22:54 by jkaczmar          #+#    #+#              #
#    Updated: 2022/07/25 03:12:43 by jkaczmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= c_po
CC		= g++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS	= 	main.cpp fixed.cpp 

OBJS := $(SRCS:.c=.o)

%.o: %.c 
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): ${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJs)

fclean:
	rm -f $(NAME)

re:	fclean all

.PHONY: all bonus fclean re
