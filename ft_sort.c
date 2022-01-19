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

/*void	ft_sort(t_stack stack)
{
	stack = ft_push_b(stack);
	printf("\nTAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
	stack = ft_push_b(stack);
	printf("\nTAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
	stack = ft_push_b(stack);
	printf("\nTAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
	stack = ft_push_b(stack);
	printf("\nTAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
}*/
void	ft_sort(t_stack stack)
{
	stack = ft_push_b(stack);
	printf("tab_a %lld tab_a %lld tab_a %lld tab_a %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2], stack.stack_a[3]);
	printf("tab_b %lld tab_b %lld tab_b %lld tab_b %lld\n\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2], stack.stack_a[3]);
	stack = ft_push_b(stack);
	printf("tab_a %lld tab_a %lld tab_a %lld tab_a %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2], stack.stack_a[3]);
	printf("tab_b %lld tab_b %lld tab_b %lld tab_b %lld\n\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2], stack.stack_a[3]);
	stack = ft_push_b(stack);
	printf("tab_a %lld tab_a %lld tab_a %lld tab_a %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2], stack.stack_a[3]);
	printf("tab_b %lld tab_b %lld tab_b %lld tab_b %lld\n\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2], stack.stack_a[3]);
	stack = ft_push_b(stack);
	printf("tab_a %lld tab_a %lld tab_a %lld tab_a %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2], stack.stack_a[3]);
	printf("tab_b %lld tab_b %lld tab_b %lld tab_b %lld\n\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2], stack.stack_a[3]);
	stack = ft_push_a(stack);
	printf("tab_a %lld tab_a %lld tab_a %lld tab_a %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2], stack.stack_a[3]);
	printf("tab_b %lld tab_b %lld tab_b %lld tab_b %lld\n\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2], stack.stack_a[3]);
	stack = ft_push_a(stack);
	printf("tab_a %lld tab_a %lld tab_a %lld tab_a %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2], stack.stack_a[3]);
	printf("tab_b %lld tab_b %lld tab_b %lld tab_b %lld\n\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2], stack.stack_a[3]);
	stack = ft_push_a(stack);
	printf("tab_a %lld tab_a %lld tab_a %lld tab_a %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2], stack.stack_a[3]);
	printf("tab_b %lld tab_b %lld tab_b %lld tab_b %lld\n\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2], stack.stack_a[3]);
	stack = ft_push_a(stack);
	printf("tab_a %lld tab_a %lld tab_a %lld tab_a %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2], stack.stack_a[3]);
	printf("tab_b %lld tab_b %lld tab_b %lld tab_b %lld\n\n", stack.stack_b[0], stack.stack_b[1], stack.stack_b[2], stack.stack_a[3]);
}