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

t_stack    ft_sort(t_stack stack)
{
    int size;
    int i;
    int j;
    int max;

    i = 0;
    max = ft_max(stack);
    size = stack.size_a;
    while (i < max)
    {
        j = 0;
        while (j < size && !ft_check_sort_stack_a(stack))
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