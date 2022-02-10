/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:57:17 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/10 09:48:53 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_if_forest(t_stack stack)
{
	while (stack.size_b != 1)
	{
		if (stack.stack_a[0] == 0)
			stack = ft_push_b(stack);
		if (stack.stack_a[1] == 0)
			stack = ft_swap(stack);
		if (stack.stack_a[2] == 0)
			stack = ft_rotate_a(stack);
		if (stack.stack_a[3] == 0 || stack.stack_a[4] == 0)
			stack = ft_reverse_a(stack);
	}
	while (stack.size_b != 2)
	{
		if (stack.stack_a[0] == 1)
			stack = ft_push_b(stack);
		if (stack.stack_a[1] == 1)
			stack = ft_swap(stack);
		if (stack.stack_a[2] == 1 || stack.stack_a[3] == 1)
			stack = ft_reverse_a(stack);
	}
	return (stack);
}

t_stack	ft_little_is_forest(t_stack stack)
{
	while (stack.size_b != 1)
	{
		if (stack.stack_a[0] == 0)
			stack = ft_push_b(stack);
		if (stack.stack_a[1] == 0)
			stack = ft_swap(stack);
		if (stack.stack_a[2] == 0 || stack.stack_a[3] == 0)
			stack = ft_reverse_a(stack);
	}
	return (stack);
}

t_stack	ft_sort_five(t_stack stack)
{
	while (!ft_check_sort_stack_a(stack))
	{
		if (stack.size_a == 5)
			stack = ft_if_forest(stack);
		else if (stack.size_a == 4)
			stack = ft_little_is_forest(stack);
		if (!ft_check_sort_stack_a(stack))
			stack = ft_sort_three(stack);
		if (stack.stack_b[0] < stack.stack_b[1])
			stack = ft_swapb(stack);
		if (stack.stack_b[0] > stack.stack_b[1] || stack.size_b == 1)
		{
			stack = ft_push_a(stack);
			stack = ft_push_a(stack);
		}
	}
	return (stack);
}
