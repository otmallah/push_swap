/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:22:41 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/12 00:22:44 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a2(t_stack *stack, t_iter *index)
{
	int	a;
	int	i;

	i = index->count3;
	a = stack->array[i];
	stack->array[i] = stack->array[i + 1];
	stack->array[i + 1] = a;
}

void	rever_a2(t_stack *stack, t_iter *index)
{
	int	a;
	int	i;

	i = index->count3;
	a = stack->array[i];
	while (i < (stack->i - 1))
	{
		stack->array[i] = stack->array[i + 1];
		i++;
	}
	if (i == (stack->i - 1))
		stack->array[i] = a;
}

void	r_rev_a2(t_stack *stack, t_iter *index)
{
	int	a;
	int	j;

	j = stack->i - 1;
	a = stack->array[j];
	while (j > index->count3)
	{
		stack->array[j] = stack->array[j - 1];
		j--;
	}
	if (j == index->count3)
		stack->array[j] = a;
}

void	swap_b(t_stack *stackb, t_iter *index)
{
	int	a;
	int	i;

	i = index->count4;
	a = stackb->array[i];
	stackb->array[i] = stackb->array[i + 1];
	stackb->array[i + 1] = a;
}
