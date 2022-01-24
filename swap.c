/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:42:03 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/06 11:08:37 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_swap(t_stack stack)
{
	int j;
	
	if (stack.size_a == 0)
		return (stack);
	j = stack.stack_a[0];
	stack.stack_a[0] = stack.stack_a[1];
	stack.stack_a[1] = j;
	write (1, "sa\n", 3);
	stack.count++;
	return (stack);
}

t_stack	ft_swapb(t_stack stack)
{
	int j;

	if (stack.size_b == 0)
		return (stack);
	j = stack.stack_b[0];
	stack.stack_b[0] = stack.stack_b[1];
	stack.stack_b[1] = j;
	write (1, "sb\n", 3);
	stack.count++;
	return (stack);
}

t_stack	ft_swapab(t_stack stack)
{
	int	i;
	int	j;

	if (stack.size_a == 0 || stack.size_b == 0)
		return (stack);
	i = stack.stack_a[0];
	j = stack.stack_b[0];
	stack.stack_a[0] = stack.stack_a[1];
	stack.stack_a[1] = i;
	stack.stack_b[0] = stack.stack_b[1];
	stack.stack_b[1] = j;
	write (1, "ss\n", 3);
	return (stack);
}