/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:42:03 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/06 11:08:37 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(long long int *tabnbr)
{
	int j;

	j = 0;
	j = tabnbr[0];
	tabnbr[0] = tabnbr[1];
	tabnbr[1] = j;
	write (1, "sa\n", 3);
}

void	ft_swapb(long long int *tabnbr)
{
	int j;

	j = 0;
	j = tabnbr[0];
	tabnbr[0] = tabnbr[1];
	tabnbr[1] = j;
	write (1, "sb\n", 3);
}

void	ft_swapab(long long int *tabnbr, long long int *tabnbrb)
{
	ft_swap(tabnbr);
	ft_swapb(tabnbrb);
	write (1, "ss\n", 3);
}