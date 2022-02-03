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
    int mediane;
    int i = 0;
    int j;
    int max = 0;

    max = ft_max(stack);
    mediane = stack.size_a;
    while (i < max)
    {
        j = 0;
        while (j < mediane && !ft_check_sort_stack_a(stack))
        {
            if ((stack.stack_a[0] >> i) & 1)
                stack = ft_rotate_a(stack);
            else
                stack = ft_push_b(stack);
            j++;
        }
        i++;
        while (stack.size_b)
            stack = ft_push_a(stack);
    }
    return (stack);
}