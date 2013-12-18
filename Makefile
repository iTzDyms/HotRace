# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cheron <cheron@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/15 11:28:02 by cheron            #+#    #+#              #
#    Updated: 2013/12/15 12:55:38 by cheron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = hotrace

SRC =  hotrace.c \
	   ft_del_tree.c \
	   ft_place_node.c \
	   ft_search_node.c \
	   ft_swap_node.c \
	   ft_new_node.c \
	   ft_putstr.c \
	   ft_strchr.c \
	   ft_strclr.c \
	   ft_putendl.c \
	   ft_putchar.c \
	   ft_strdup.c \
	   ft_strdel.c \
	   ft_strcmp.c \
	   ft_strlen.c \
	   ft_strnew.c \
	   get_next_line.c \
	   ft_strjoin.c \
	   ft_strcpy.c \
	   ft_memccpy.c \
	   ft_hash.c \


FLAGS = -Wall -Wextra -Werror -O3

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c hotrace.h
	@($(CC) $(FLAG) -c $^)

clean:
	rm -f $(OBJ) hotrace.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
