/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:50:04 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/06 10:50:07 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_rotate_a(t_stack stack)
{
    int j;
    int tmp;

    tmp = stack.stack_a[0];
    j = - 1;
    while (++j < stack.size_a)
        stack.stack_a[j] = stack.stack_a[j + 1];
    stack.stack_a[stack.size_a - 1] = tmp;
    write (1, "ra\n", 3);
    return (stack);
}

t_stack ft_rotate_b(t_stack stack)
{
    int j;
    int tmp;

    tmp = stack.stack_b[0];
    j = - 1;
    while (++j < stack.size_b)
        stack.stack_b[j] = stack.stack_b[j + 1];
    stack.stack_b[stack.size_b - 1] = tmp;
    write (1, "rb\n", 3);
    return (stack);
}

t_stack ft_rotate_a_b(t_stack stack)
{
    int j;
    int tmp;

    tmp = stack.stack_a[0];
    j = - 1;
    while (++j < stack.size_a)
        stack.stack_a[j] = stack.stack_a[j + 1];
    stack.stack_a[stack.size_a - 1] = tmp;
    tmp = stack.stack_b[0];
    j = - 1;
    while (++j < stack.size_b)
        stack.stack_b[j] = stack.stack_b[j + 1];
    stack.stack_b[stack.size_b - 1] = tmp;
    write (1, "rr\n", 3);
    return (stack);
}