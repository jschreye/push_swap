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
        if (stack.stack_b[i] > stack.stack_b[j])
            i++;
        else
            return (0);
    }
    return (1);
}

int ft_max(t_stack stack)
{
    int i;
    int max;

    i = 0;
    max = 0;
    while (i < stack.size_a)
    {
        if (stack.stack_a[i] > max)
            max = stack.stack_a[i];
        i++;
    }
    return (max);
}

int ft_min(t_stack stack)
{
    int i;
    int min;

    i = 0;
    min = stack.stack_a[0];
    while (i < stack.size_a)
    {
        if (stack.stack_a[i] < min)
        {
            min = stack.stack_a[i];
            i++;
        }
        else
            i++;
    }
    return (min);
}

t_stack    ft_sort(t_stack stack)
{
    int result;
    int mediane = 0;
    int max = 0;
    int min = 0;

    result = 0;
    while (result == 0)
    {
        if (ft_check_sort_stack_a(stack) == 1 && stack.size_b == 0)
        {
            result = 1;
            return (stack);
        }
        max = ft_max(stack);
        min = ft_min(stack);
        mediane = (max + min) / 2;
        while (!ft_check_sort_stack_a(stack))
        {
            //while (stack.stack_a[0] != mediane)
            //{
                if (stack.stack_a[0] == ft_min(stack))
                    stack = ft_push_b(stack);
                if (stack.stack_b[0] < stack.stack_b[1])
                {
                    stack = ft_swapb(stack);
                }
                else
                    stack = ft_rotate_a(stack);
            //}
            // if (stack.stack_a[0] == mediane)
            //     {
            //         stack = ft_push_b(stack);
            //         mediane++;
            //     }
        }
        while (stack.size_b > 0)
        {
            max = stack.stack_a[0];
            if (stack.stack_b[1] > stack.stack_b[0])
                stack = ft_swapb(stack);
            if (stack.stack_b[0] == max - 1)
                stack = ft_push_a(stack);
            else
            {
                stack = ft_reverse_b(stack);
                printf("\nsize A = %d\nsize B = %d\n", stack.size_a, stack.size_b);
                printf("\nAPRES  TAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
            }
        }
    }
    return (stack);
    //printf("\nsize A = %d\nsize B = %d\n", stack.size_a, stack.size_b);
    //printf("\nAPRES  TAB A / TAB B\npos1 %lld pos1 %lld\npos2 %lld pos2 %lld\npos3 %lld pos3 %lld\npos4 %lld pos4 %lld\npos5 %lld pos5 %lld\n", stack.stack_a[0], stack.stack_b[0], stack.stack_a[1], stack.stack_b[1], stack.stack_a[2], stack.stack_b[2], stack.stack_a[3], stack.stack_b[3], stack.stack_a[4], stack.stack_b[4]);
}