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

t_stack ft_push_a(t_stack stack)
{
    if (!stack.stack_b)
        return (stack);
    write(1, "pa\n", 3);
    return (stack);
}

t_stack ft_push_b(t_stack stack)
{
    int i;

    if (!stack.stack_a)
        return (stack);
    stack = ft_realloc_one_more_b(stack);
    i = stack.size_b - 1;
    stack.stack_b[0] = stack.stack_a[0];
    while (i > 0)
    {
        stack.stack_b[i] = stack.stack_b[i - 1];
        i--;
    }
     write(1, "pb\n", 3);
     return (stack);
}