/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:57:17 by jschreye          #+#    #+#             */
/*   Updated: 2022/01/07 14:51:03 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long int	*ft_ascii_to_int(char **tabstr)
{
	int				i;
	int				j;
	long long int	nbr;
	long long int	*tabnbr;

	i = 0;
	while (tabstr[i])
		i++;
	tabnbr = malloc(sizeof(long long int) * (i + 1));
	i = 0;
	j = 0;
	while (tabstr[i])
	{
		nbr = ft_atoi(tabstr[i++]);
		tabnbr[j++] = nbr;
	}
	return (tabnbr);
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

void	ft_check_doublon(long long int *nbr)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = 0;
	j = 0;
	while (nbr[len])
		len++;
	while (len > 0)
	{
		i = j;
		while (nbr[i])
		{	
			if (nbr[j] != nbr[i + 1])
				i++;
			else
			{
				write(1, "error\n", 6);
				exit(0);
			}
		}
		j++;
		len--;
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

int	main(int argc, char **argv)
{
	char			**array;
	long long int	*tabnbr;

	if (argc == 2)
	{
		array = ft_split(argv[1], ' ');
		tabnbr = ft_ascii_to_int(array);
		ft_check_full_nbr(array);
		ft_check_doublon(tabnbr);
		ft_check_size_int(tabnbr);
		ft_sort(tabnbr);
		printf("%lld\n", tabnbr[0]);
		printf("%lld\n", tabnbr[1]);
		free(tabnbr);
	}
	else if (argc > 2)
	{
		tabnbr = ft_ascii_to_int(argv + 1);
		ft_check_full_nbr(argv + 1);
		ft_check_doublon(tabnbr);
		ft_check_size_int(tabnbr);
		ft_sort(tabnbr);
		free(tabnbr);
	}
	return (0);
}
