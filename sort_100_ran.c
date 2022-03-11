/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_ran.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:57:25 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/07 23:57:27 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_searcha(t_stack *stacka, t_iter *index, int idx);
void	ft_sort_100_num(t_stack *stacka, t_stack *stackb, t_iter *index);

void	rand_again(t_stack *sta, t_stack *st_tmp, t_stack *stb, t_iter *id)
{
	int	i;
	int	ac;
	int	count;

	i = 0;
	count = 0;
	ac = 0;
	ft_rand_100(sta, st_tmp, id);
	while (ac < id->num_arg)
	{
		ac = ac + (id->num_arg / 10);
		while (ac > i)
		{
			if (sta->array[id->count3] >= count && sta->array[id->count3] < ac)
			{
				push_b(sta, stb, id);
				i++;
			}
			else if (i < (id->num_arg - i))
				rever_a(sta, id);
			else
				r_rev_a(sta, id);
		}
	}
	ft_sort_100_num(sta, stb, id);
}

int	ft_search(t_stack *stackb, t_iter *index, int k, int idx)
{
	int	i;
	int	j;

	j = 0;
	i = index->count4;
	while (idx != stackb->array[i])
	{
		i++;
		j++;
	}
	k = index->num_arg - i;
	if (j < k)
		return (0);
	return (1);
}

void	ft_sort_100_num(t_stack *stacka, t_stack *stackb, t_iter *index)
{
	int	i;
	int	k;

	i = index->num_arg - 1;
	while (i >= 0)
	{
		k = (index->num_arg - i);
		if (stackb->array[index->count4] == i)
		{
			push_a(stacka, stackb, index);
			i--;
		}
		else if (ft_search(stackb, index, k, i) == 0)
		{
			while (stackb->array[index->count4] != i)
				re_b(stackb, index);
		}
		else
		{
			while (stackb->array[index->count4] != i)
				r_rev_b(stackb, index);
		}
	}
}
