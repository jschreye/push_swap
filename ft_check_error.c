/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:57:17 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/07 14:51:03 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_ascii_to_int(char **tabstr, t_stack stack)
{
	int	i;

	stack.size_a = 0;
	while (tabstr[stack.size_a])
		stack.size_a++;
	stack.stack_a = malloc(sizeof(long long int) * (stack.size_a));
	if (!stack.stack_a)
		exit(0);
		stack.stack_b = malloc(sizeof(long long int) * (stack.size_a));
	if (!stack.stack_b)
		exit(0);
	i = - 1;
	while (tabstr[++i])
		stack.stack_a[i] = ft_atoi(tabstr[i]);
	return (stack);
}

void	ft_check_full_nbr(char **str)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < len)
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '-' && ft_isdigit(str[i][j + 1]) == 1)
				j++;
			if (str[i][j] >= '0' && str[i][j] <= '9')
				j++;
			else
			{
				write(1, "error\n", 6);
				exit(0);
			}
		}
		i++;
	}
}

void	ft_check_doublon(t_stack stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < stack.size_a)
	{
		i = j + 1;
		while (i < stack.size_a)
		{	
			if (stack.stack_a[j] != stack.stack_a[i])
				i++;
			else
			{
				write(1, "error\n", 6);
				exit(0);
			}
		}
		j++;
	}
}

void	ft_check_size_int(long long int *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (nbr[i] > 2147483647 || nbr[i] < -2147483648)
		{
			write(1, "error\n", 6);
			exit(0);
		}
		else
			i++;
	}
}

t_stack	ft_check_error(int argc, char **argv, t_stack stack)
{
	char			**array;

	if (argc < 2)
		exit(0);
	if (argc == 2)
	{
		array = ft_split(argv[1], ' ');
		stack = ft_ascii_to_int(array, stack);
		ft_check_full_nbr(array);
		ft_check_doublon(stack);
		ft_check_size_int(stack.stack_a);
	}
	else if (argc > 2)
	{
		stack = ft_ascii_to_int(argv + 1, stack);
		ft_check_full_nbr(argv + 1);
		ft_check_doublon(stack);
		ft_check_size_int(stack.stack_a);
	}
	return (stack);
}