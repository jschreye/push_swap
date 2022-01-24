/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:42:03 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/06 11:08:37 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_realloc_b(t_stack stack)
{
    int i;

    ft_memcpy(stack.stack_a, stack.stack_b, stack.size_b);
    i = stack.size_b;
    stack.size_a = stack.size_b;
    while(stack.size_b > 0)
    {
        stack.stack_b[i] = 0;
        i--;
    }
    return (stack);
}