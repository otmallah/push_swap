/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:24:26 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/04 14:24:27 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	puush_again(t_stack	*stackb, t_iter *index)
{
	int	a;
	int i = 0;
	int j;

	a  = stackb->array[index->count];
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

void	push_b(t_stack	*stack_a, t_stack	*stack_b, t_iter *index)
{
	stack_b->array[index->count] = stack_a->array[index->count];
	puush_again(stack_b, index);
	index->count += 1;
	stack_b->j++;
	index->count3++;
	index->count2++;
	write (1, "pb\n", 3);
}

void	push_a(t_stack *stacka, t_stack *stackb, t_iter *index)
{
	index->count3--;
	stacka->array[index->count3] = stackb->array[index->count4];
	index->count4++;
	write (1, "pa\n", 3);
}     

void	re_b(t_stack *stackb, t_iter *index)
{
	int a;
	int i;

	i = index->count4;
	a = stackb->array[i];
	while (i < (stackb->j - 1))
	{
		stackb->array[i] = stackb->array[i + 1];
		i++;
	}
	if (i == (stackb->j - 1))
		stackb->array[i] = a;
	write(1, "rb\n", 3);
}

void	r_rev_b(t_stack *stackb , t_iter *index)
{
	int a;
	int j = stackb->j - 1;

	a = stackb->array[j];
	while (j > index->count4)
	{
		stackb->array[j] = stackb->array[j - 1];
		j--;
	}
	if (j == index->count4)
		stackb->array[j] = a;
	write(1, "rrb\n", 4);
}