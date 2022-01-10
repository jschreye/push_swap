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

void	ft_sort(long long int *tabnbr)
{
	int i;
	int *tabnbrb;

	i = 0;
	tabnbrb = 0;
	while(tabnbr[i])
		i++;
	tabnbrb = malloc(sizeof(int) * (i + 1));
	if (tabnbr[0] > tabnbr[1])
		ft_swap(tabnbr);
}
