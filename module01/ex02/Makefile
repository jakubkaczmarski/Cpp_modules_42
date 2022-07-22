# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 17:22:54 by jkaczmar          #+#    #+#              #
#    Updated: 2022/07/23 01:41:57 by jkaczmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= brain
CC		= g++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS	= 	main.cpp

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
