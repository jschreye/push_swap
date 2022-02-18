/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:57:17 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/18 10:37:01 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;

	stack.stack_a = NULL;
	stack.stack_b = NULL;
	stack.newtab = NULL;
	stack.stack_a_bis = NULL;
	stack.size_b = 0;
	stack = ft_check_error(argc, argv, stack);
	stack = ft_sorted_index(stack);
	if (stack.size_a < 4)
		stack = ft_sort_three(stack);
	if (stack.size_a > 3 && stack.size_a <= 5)
		stack = ft_sort_five(stack);
	else
		stack = ft_sort(stack);
	free(stack.stack_a);
	free(stack.stack_b);
	free(stack.newtab);
	free(stack.stack_a_bis);
	return (0);
}
