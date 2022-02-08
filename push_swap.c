/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:57:17 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/07 14:51:03 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack stack;
	int i;

	stack.stack_a = NULL;
	stack.stack_b = NULL;
	stack.newTab = NULL;
	stack.stack_a_bis = NULL;
	stack.size_b = 0;
	stack = ft_check_error(argc, argv, stack);
	stack = ft_sorted_index(stack);
	stack = ft_sort(stack);
	free(stack.stack_a);
	free(stack.stack_b);
	free(stack.newTab);
	free(stack.stack_a_bis);
	return (0);
}