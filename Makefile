# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 15:31:43 by jschreye          #+#    #+#              #
#    Updated: 2022/01/05 13:38:05 by jschreye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -g -O0 -Wall -Werror -Wextra

NAME = push_swap

SRC = push_swap.c swap.c ft_sort.c ft_check_error.c push.c rotate.c reverse.c ft_sorted_index.c

all:
		make -C libft
		$(CC) $(FLAGS) $(SRC) libft/libft.a -o $(NAME)
	
clean:
		make clean -C libft
		rm -rf $(NAME)

fclean: clean
		make fclean -C libft
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
