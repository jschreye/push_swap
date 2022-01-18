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

void	ft_sort(t_stack stack)
{
	stack = ft_push_b(stack);
	printf("%lld\n %lld\n", stack.stack_b[0], stack.stack_b[1]);
	stack = ft_push_b(stack);
	printf("%lld\n %lld\n", stack.stack_b[0], stack.stack_b[1]);
}
