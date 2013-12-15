# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/14 00:01:12 by npineau           #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2013/12/15 08:10:58 by cheron           ###   ########.fr        #
=======
#    Updated: 2013/12/15 07:13:36 by npineau          ###   ########.fr        #
>>>>>>> a6ea9ea043a532ebbde291400b7baa509bc54d20
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = hotrace

SRC = $(TREE)

TREE = hotrace.c \
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
	   ft_lstadd.c \
	   ft_lstnew.c \
	   ft_lstdel.c \
	   get_next_line.c \
	   ft_strjoin.c \
	   ft_strcpy.c \
	   ft_memccpy.c \
	   ft_hash.c

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
%.o: %.c
	@($(CC) $(FLAG) -c $^)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
