/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:23:11 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/04 14:23:15 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void swap_a(t_stack *stack, t_iter *index)
{
	int a;
	int i;

	i = index->count3;
	a = stack->array[i];
	stack->array[i] = stack->array[i + 1];
	stack->array[i + 1] = a;
	write(1, "sa\n", 3);
}

void rever_a(t_stack *stack, t_iter *index)
{
	int a;
	int i;

	i = index->count3;
	a = stack->array[i];
	while (i < (stack->i - 1))
	{
		stack->array[i] = stack->array[i + 1];
		i++;
	}
	if (i == (stack->i - 1))
		stack->array[i] = a;
	write(1, "ra\n", 3);
}

void r_rev_a(t_stack *stack, t_iter *index)
{
	int a;
	int j = stack->i - 1;

	a = stack->array[j];
	while (j > index->count3)
	{
		stack->array[j] = stack->array[j - 1];
		j--;
	}
	if (j == index->count3)
		stack->array[j] = a;
	write(1, "rra\n", 4);
}
