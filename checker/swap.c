/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:22:33 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/12 00:22:36 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	puush_again2(t_stack	*stackb, t_iter *index)
{
	int	a;
	int	i;
	int	j;

	i = 0;
	a = stackb->array[index->count];
	j = index->count;
	while (i < index->count)
	{
		stackb->array[j] = stackb->array[j - 1];
		i++;
		j--;
	}
	if (i == index->count)
		stackb->array[0] = a;
}

void	push_b2(t_stack	*stack_a, t_stack	*stack_b, t_iter *index)
{
	stack_b->array[index->count] = stack_a->array[index->count];
	puush_again2(stack_b, index);
	index->count += 1;
	stack_b->j++;
	index->count3++;
	index->count2++;
}

void	push_a2(t_stack *stacka, t_stack *stackb, t_iter *index)
{
	index->count3--;
	stacka->array[index->count3] = stackb->array[index->count4];
	index->count4++;
}

void	re_b2(t_stack *stackb, t_iter *index)
{
	int	a;
	int	i;

	i = index->count4;
	a = stackb->array[i];
	while (i < (stackb->j - 1))
	{
		stackb->array[i] = stackb->array[i + 1];
		i++;
	}
	if (i == (stackb->j - 1))
		stackb->array[i] = a;
}

void	r_rev_b2(t_stack *stackb, t_iter *index)
{
	int	a;
	int	j;

	j = stackb->j - 1;
	a = stackb->array[j];
	while (j > index->count4)
	{
		stackb->array[j] = stackb->array[j - 1];
		j--;
	}
	if (j == index->count4)
		stackb->array[j] = a;
}
