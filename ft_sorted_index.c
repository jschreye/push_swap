/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:57:17 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/07 14:51:03 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_sort_newTab(t_stack stack)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < stack.size_a - 1)
    {
        j = i + 1;
        while (j < stack.size_a)
        {
            if (stack.newTab[i] > stack.newTab[j])
            {
                tmp = stack.newTab[i];
                stack.newTab[i] = stack.newTab[j];
                stack.newTab[j] = tmp;
            }
            j++;
        }
        i++;
    }
    return (stack);
}

t_stack ft_sorted_index(t_stack stack)
{
    int i;
    int j;
    int newValue;

    newValue = 0;
    i = 0;
    stack = ft_sort_newTab(stack);
    while (i < stack.size_a)
    {
        j = 0;
        while (j < stack.size_a)
        {
            if (stack.newTab[i] == stack.stack_a_bis[j])
            {
                stack.stack_a[j] = newValue;
                newValue++;
            }
            j++;
        }
        i++;
    }
    return (stack);
}