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

int    ft_check_sort_stack_a(t_stack stack)
{
    int    i;
    int    j;

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

int    ft_check_sort_stack_b(t_stack stack)
{
    int    i;
    int    j;

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

t_stack    ft_is_up(t_stack stack)
{
    if (stack.size_a == 1)
        stack = ft_push_b(stack);
    stack = ft_swap(stack);
    stack = ft_push_b(stack);
    return (stack);
}

t_stack    ft_decharge_a_b(t_stack stack)
{
    while (stack.size_b > 0)
        stack = ft_push_a(stack);
    return (stack);
}

t_stack ft_cpy_b_a(t_stack stack)
{
    int i;
    int len;

    len = stack.size_b - 1;
    i = 0;
    while (i < stack.size_b)
    {
        stack.stack_a[i] = stack.stack_b[len];
        stack.stack_b[len] = 0;
        i++;
        len--;
    }
    stack.size_a = stack.size_b;
    stack.size_b = 0;
    return (stack);
}

/*t_stack    ft_final_sort(t_stack stack)
{
    while (stack.size_a > 0)
    {
        if (stack.size_a == 1)
                stack = ft_push_b(stack);
        if (stack.stack_a[0] > stack.stack_a[1])
        {
            stack = ft_swap(stack);
            stack = ft_push_b(stack);
        }
           else if (stack.stack_a[0] < stack.stack_a[1])
           stack = ft_push_b(stack);
    }
    while (stack.size_b > 0)
    {
        if (stack.size_b == 1)
                stack = ft_push_a(stack);
        if (stack.stack_b[0] < stack.stack_b[1])
        {  
            stack = ft_swapb(stack);
            stack = ft_push_a(stack);
        }
        else if (stack.stack_b[0] > stack.stack_b[1])
            stack = ft_push_a(stack);
    }
    return (stack);
}*/

t_stack    ft_sort(t_stack stack)
{
    int result;
    int len;

    len = stack.size_a;
    result = 0;
    //printf("\nAVANT  TAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
    while (result == 0)
    {
        //printf("\nsize A = %d\nsize B = %d\n", stack.size_a, stack.size_b);
        //printf("\nPENDANT  TAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
        if (ft_check_sort_stack_a(stack) == 1 && stack.size_b == 0)
        {
            result = 1;
            return (stack);
        }
        //stack = ft_final_sort(stack);
        if (stack.stack_a[0] > stack.stack_a[1])
            stack = ft_is_up(stack);
        else if (stack.stack_a[0] < stack.stack_a[1])
            stack = ft_push_b(stack);
        if (stack.stack_b[0] < stack.stack_b[1] && stack.size_b > 1)
            stack = ft_swapb(stack);
        if (ft_check_sort_stack_b(stack) == 1 && stack.size_a == 0)
            stack = ft_decharge_a_b(stack);
        else if (ft_check_sort_stack_b(stack) == 0 && stack.size_a == 0)
            stack = ft_decharge_a_b(stack);
    }
    return (stack);
    //printf("\nsize A = %d\nsize B = %d\n", stack.size_a, stack.size_b);
    //printf("\nAPRES  TAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
}