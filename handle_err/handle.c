/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:13:58 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/11 22:14:14 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort1(t_stack *sta, t_stack *stb, t_stack *st_tp, t_iter *id)
{
	stb->array = (int *)malloc(sizeof(int) * id->num_arg);
	ft_sort_param(st_tp, id->num_arg);
	ft_sort_all(sta, stb, st_tp, id);
}

void	sort2(t_stack *sta, t_stack *stb, t_iter *id)
{
	stb->array = (int *)malloc(sizeof(int) * id->num_arg);
	rand_5_num(sta, stb, id);
}

void	sort3(t_stack *sta, t_stack *st_tmp, t_stack *stb, t_iter *id)
{
	stb->array = (int *)malloc(sizeof(int) * id->num_arg);
	ft_sort_param(st_tmp, id->num_arg);
	rand_again(sta, st_tmp, stb, id);
}

void	initial(t_iter *index, int a)
{
	index->count = 0;
	index->count2 = 0;
	index->count3 = 0;
	index->count4 = 0;
	index->num_arg = a;
	index->num_sec = a;
}

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
				if (strcmp(av[j], av[i]) == 0)
				{
					printf("%s", av[i]);
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
