# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 15:31:43 by jschreye          #+#    #+#              #
#    Updated: 2022/02/09 11:53:30 by jschreye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = push_swap

SRC = push_swap.c swap.c ft_sort.c ft_check_error.c push.c rotate.c reverse.c ft_sorted_index.c sort_five.c sort_three.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		make -C libft
		$(CC) $(FLAGS) $(OBJ) libft/libft.a -o $(NAME)
	
clean:
		make clean -C libft
		rm -rf $(OBJ)

fclean: clean
		make fclean -C libft
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
