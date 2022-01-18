/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 09:15:04 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/06 10:41:50 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack stack)
{
	stack = ft_push_b(stack);
	printf("tab %lld tab %lld tab %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2]);
	printf("tab2 %lld tab2 %lld tab2 %lld\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2]);
	stack = ft_push_b(stack);
	printf("tab %lld tab %lld tab %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2]);
	printf("tab2 %lld tab2 %lld tab2 %lld\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2]);
	stack = ft_push_b(stack);
	printf("tab %lld tab %lld tab %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2]);
	printf("tab2 %lld tab2 %lld tab2 %lld\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2]);
}
