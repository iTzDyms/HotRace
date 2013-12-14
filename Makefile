# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/14 00:01:12 by npineau           #+#    #+#              #
#    Updated: 2013/12/14 01:02:44 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HotRace

SRC = $(TREE) \
	  $(GET)

TREE = sources/tree/ft_place_node.c \
	   sources/tree/ft_search_node.c \
	   sources/tree/ft_new_node.c

GET = sources/get/

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)

%.c: %.o
	@($(CC) $(FLAG) -c $^ -I $(INCLUDE)
