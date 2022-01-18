/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:49:47 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/06 11:18:24 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_realloc_one_more_a(t_stack stack)
{
    long long int   *new_ptr;

    if (stack.size_a == 0)
    {
        stack.stack_a = malloc(stack.size_a + 1);
        stack.size_a++;
        return (stack);
    }
    new_ptr = malloc(stack.size_a + 1);
    stack.size_a++;
    ft_memcpy(stack.stack_a, new_ptr, stack.size_a);
    free(stack.stack_a);
    return (stack);
}

t_stack ft_realloc_delete_one_a(t_stack stack)
{
    long long int   *new_ptr;

    if (stack.size_a == 0)
        return (stack);
    new_ptr = malloc(stack.size_a - 1);
    stack.size_a--;
    ft_memcpy(stack.stack_a, new_ptr, stack.size_a);
    free(stack.stack_a);
    return (stack);
}

t_stack ft_realloc_one_more_b(t_stack stack)
{
    long long int   *new_ptr;

    if (stack.size_b == 0)
    {
        stack.stack_b = malloc(stack.size_b + 1);
        if (!stack.stack_b)
            exit(0);
        stack.size_b++;
        return (stack);
    }
    new_ptr = malloc(stack.size_b + 1);
    if (!new_ptr)
        exit(0);
    stack.size_b++;
    ft_memcpy(stack.stack_b, new_ptr, stack.size_b);
    //free(stack.stack_b);
    return (stack);
}

t_stack ft_realloc_delete_one_b(t_stack stack)
{
    long long int   *new_ptr;

    if (stack.size_b == 0)
        return (stack);
    new_ptr = malloc(stack.size_b - 1);
    stack.size_b--;
    ft_memcpy(stack.stack_b, new_ptr, stack.size_b);
    free(stack.stack_b);
    return (stack);
}