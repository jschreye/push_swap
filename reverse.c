/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:50:17 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/10 09:43:46 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_reverse_a(t_stack stack)
{
	int	j;
	int	tmp;

	tmp = stack.stack_a[stack.size_a - 1];
	j = stack.size_a;
	while (j-- > 0)
		stack.stack_a[j] = stack.stack_a[j - 1];
	stack.stack_a[0] = tmp;
	write (1, "rra\n", 4);
	return (stack);
}

t_stack	ft_reverse_b(t_stack stack)
{
	int	j;
	int	tmp;

	tmp = stack.stack_b[stack.size_b - 1];
	j = stack.size_b;
	while (j-- > 0)
		stack.stack_b[j] = stack.stack_b[j - 1];
	stack.stack_b[0] = tmp;
	write (1, "rrb\n", 4);
	return (stack);
}

t_stack	ft_reverse_a_b(t_stack stack)
{
	int	j;
	int	tmp;

	tmp = stack.stack_a[stack.size_a - 1];
	j = stack.size_a;
	while (j-- > 0)
		stack.stack_a[j] = stack.stack_a[j - 1];
	stack.stack_a[0] = tmp;
	tmp = stack.stack_b[stack.size_b - 1];
	j = stack.size_b;
	while (j-- > 0)
		stack.stack_b[j] = stack.stack_b[j - 1];
	stack.stack_b[0] = tmp;
	write (1, "rrr\n", 4);
	return (stack);
}
