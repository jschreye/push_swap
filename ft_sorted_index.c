/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:57:17 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/09 11:56:42 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_sort_newtab(t_stack stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < stack.size_a - 1)
	{
		j = i + 1;
		while (j < stack.size_a)
		{
			if (stack.newtab[i] > stack.newtab[j])
			{
				tmp = stack.newtab[i];
				stack.newtab[i] = stack.newtab[j];
				stack.newtab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (stack);
}

t_stack	ft_sorted_index(t_stack stack)
{
	int	i;
	int	j;
	int	newvalue;

	newvalue = 0;
	i = 0;
	stack = ft_sort_newtab(stack);
	while (i < stack.size_a)
	{
		j = 0;
		while (j < stack.size_a)
		{
			if (stack.newtab[i] == stack.stack_a_bis[j])
			{
				stack.stack_a[j] = newvalue;
				newvalue++;
			}
			j++;
		}
		i++;
	}
	return (stack);
}
