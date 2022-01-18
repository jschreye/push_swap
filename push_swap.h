/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:58:45 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/07 14:53:08 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>

typedef struct s_stack
{
	long long int	*stack_a;
	long long int	*stack_b;
	int				size_a;
	int				size_b;

}					t_stack;

t_stack	ft_check_error(int argc, char **argv, t_stack stack);
t_stack	ft_swap(t_stack stack);
void	ft_sort(t_stack stack);
t_stack	ft_swapb(t_stack stack);
t_stack	ft_swapab(t_stack stack);
t_stack ft_push_a(t_stack stack);
t_stack ft_push_b(t_stack stack);
t_stack ft_realloc_one_more_a(t_stack stack);
t_stack ft_realloc_delete_one_a(t_stack stack);
t_stack ft_realloc_one_more_b(t_stack stack);
t_stack ft_realloc_delete_one_b(t_stack stack);

#endif
