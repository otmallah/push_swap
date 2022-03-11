/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_4_rand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:52:45 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/07 17:52:46 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_all(t_stack *stacka, t_stack *stackb, t_iter *index);

int	ft_search3(t_stack *stack, t_iter *index, int idx)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = index->count3;
	while (idx != stack->array[i])
	{
		i++;
		j++;
	}
	k = index->num_arg - i;
	if (j < k)
		return (0);
	return (1);
}

void	ft_sort_all(t_stack *sta, t_stack *stb, t_stack *st_tm, t_iter *id)
{
	int	ac;

	ac = 0;
	ft_rand_100(sta, st_tm, id);
	while (ac < id->num_arg)
	{
		if (sta->array[id->count3] == ac)
		{
			push_b(sta, stb, id);
			ac++;
		}
		else if (ft_search3(sta, id, ac) == 0)
			rever_a(sta, id);
		else
			r_rev_a(sta, id);
	}
	push_all(sta, stb, id);
}

void	push_all(t_stack *stacka, t_stack *stackb, t_iter *index)
{
	int	i;

	i = 0;
	while (i < index->num_arg)
	{
		push_a(stacka, stackb, index);
		i++;
	}
}
