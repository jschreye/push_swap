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

int	ft_check_sort_stack_a(t_stack stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack.size_a - 1)
	{
		j = i + 1;
		if (stack.stack_a[i] < stack.stack_a[j])
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_check_sort_stack_b(t_stack stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack.size_b - 1)
	{
		j = i + 1;
		if (stack.stack_b[i] < stack.stack_b[j])
			i++;
		else
			return (0);
	}
	return (1);
}

	/*stack = ft_push_b(stack);
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
	//ft_swapb(stack);
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
	//ft_swap(stack);
	printf("tab_a %lld tab_a %lld tab_a %lld tab_a %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2], stack.stack_a[3]);
	ft_reverse_a(stack);
	printf("tab_a %lld tab_a %lld tab_a %lld tab_a %lld\n", stack.stack_a[0], stack.stack_a[1], stack.stack_a[2], stack.stack_a[3]);*/

t_stack    ft_is_up(t_stack stack)
{
    if (stack.size_a == 1)
        stack = ft_push_b(stack);
    stack = ft_swap(stack);
    stack = ft_push_b(stack);
    return (stack);
}

void    ft_sort(t_stack stack)
{
    int result;
    int len;

    len = stack.size_a;
    result = 0;
    printf("\nAVANT  TAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
    while (result == 0)
    {
        printf("\nsize A = %d\nsize B = %d\n", stack.size_a, stack.size_b);
        printf("\nPENDANT  TAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
        if (stack.stack_a[0] > stack.stack_a[1])
            stack = ft_is_up(stack);
        else if (stack.stack_a[0] < stack.stack_a[1])
            stack = ft_push_b(stack);
        if (stack.stack_b[0] < stack.stack_b[1] && stack.size_b > 1)
            stack = ft_swapb(stack);
        if (ft_check_sort_stack_b(stack) == 1 && stack.size_a == 0)
        {
            while (stack.size_b > 0)
                stack = ft_push_a(stack);
        }
        else if (ft_check_sort_stack_b(stack) == 0 && stack.size_a == 0)
        {
            while (stack.size_b > 0)
                stack = ft_push_a(stack);
        }
        if (ft_check_sort_stack_a(stack) == 1 && stack.size_b == 0)
            result = 1;
    }
    printf("\nsize A = %d\nsize B = %d\n", stack.size_a, stack.size_b);
    printf("\nAPRES  TAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
}