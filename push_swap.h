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

void	ft_swap(long long int *tabnbr);
void	ft_sort(long long int *tabnbr);

typedef struct nbr
{
	int		i;
	int		j;
}			t_nbr1;

#endif
