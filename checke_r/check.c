/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:42:18 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/12 13:42:19 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (av[j])
	{
		while (av[i])
		{
			if (i != j)
			{
				if (ft_strcmp(av[j], av[i]) == 0)
				{
					write(1, "Error\n", 7);
					exit(1);
				}
			}
			i++;
		}
		i = 1;
		j++;
	}
}

int	checker(char *str)
{
	int	num;

	if (str[0] == '0' || (str[0] == '-' && str[1] == '1'))
	{
		num = ft_atoi(str);
		if (num >= -2147483648 && num <= 2147483647)
			return (1);
		else
			return (5);
	}
	num = ft_atoi(str);
	if (num != 0 && num != -1)
	{
		if (num >= -2147483648 && num <= 2147483647)
		{
			return (1);
		}
		else
			return (5);
	}
	return (0);
}

void	only_num(char *str)
{
	int	i;
	int	res;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			write (1, "Error\n", 7);
			exit(0);
		}
	}
	res = checker(str);
	if (res != 1)
	{
		write (1, "Error\n", 7);
		exit(0);
	}
}
