/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_5_rand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:24:38 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/05 18:24:39 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num(t_stack *stacka, t_iter *index)
{
	float	i;
	float	p;
	int		a;
	int		b;
	int		idx;

	a = index->count3;
	while (a < index->num_arg)
	{
		i = stacka->array[a] / 2;
		if (a == index->count3)
		{
			p = i;
			b = stacka->array[a];
			idx = a;
		}
		if (i < p)
		{
			p = i;
			b = stacka->array[a];
			idx = a;
		}
		a++;
	}
	return (idx);
}

void	rand5_num(t_stack *stack_a, t_stack *stack_b, t_iter *index)
{
	int	a;
	int	i;

	i = 0;
	while (i < 2)
	{
		a = num(stack_a, index);
		if (a == index->count3)
		{
			push_b(stack_a, stack_b, index);
			i++;
		}
		else if (a == index->count3 + 1)
			swap_a(stack_a, index);
		else if (a == index->count3 + 2)
		{
			rever_a(stack_a, index);
			rever_a(stack_a, index);
		}
		else if (a == index->count3 + 3)
			r_rev_a(stack_a, index);
		else if (a == index->count3 + 4)
			r_rev_a(stack_a, index);
	}
}

void	rand_5_num(t_stack *stack_a, t_stack *stack_b, t_iter *index)
{
	rand5_num(stack_a, stack_b, index);
	rand_num(stack_a, index);
	push_a(stack_a, stack_b, index);
	push_a(stack_a, stack_b, index);
}
