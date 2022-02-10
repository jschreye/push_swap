/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:57:17 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/10 09:57:35 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_sort_one_first(t_stack stack)
{
	if (stack.stack_a[1] < stack.stack_a[2])
		return (stack);
	if (stack.stack_a[1] > stack.stack_a[2])
	{
		stack = ft_reverse_a(stack);
		stack = ft_swap(stack);
	}
	return (stack);
}

t_stack	ft_sort_three_first(t_stack stack)
{
	if (stack.stack_a[1] < stack.stack_a[2])
	{
		stack = ft_reverse_a(stack);
		stack = ft_reverse_a(stack);
	}
	else if (stack.stack_a[1] > stack.stack_a[2])
	{
		stack = ft_rotate_a(stack);
		stack = ft_swap(stack);
	}
	return (stack);
}

t_stack	ft_sort_two_first(t_stack stack)
{
	if (stack.stack_a[1] < stack.stack_a[2])
		stack = ft_swap(stack);
	else if (stack.stack_a[1] > stack.stack_a[2])
		stack = ft_reverse_a(stack);
	return (stack);
}

t_stack	ft_sort_three(t_stack stack)
{
	if (stack.stack_a[0] < stack.stack_a[1]
		&& stack.stack_a[0] < stack.stack_a[2])
		stack = ft_sort_one_first(stack);
	else if (stack.stack_a[0] > stack.stack_a[1]
		&& stack.stack_a[0] > stack.stack_a[2])
		stack = ft_sort_three_first(stack);
	else
		stack = ft_sort_two_first(stack);
	return (stack);
}
