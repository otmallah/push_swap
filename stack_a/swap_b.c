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

void	push_b(t_stack	*stack_a, t_stack	*stack_b, t_iter *index)
{
	int j;
	int a;

	a = stack_b->array[0];
	stack_b->array[0] = stack_a->array[index->count];
	if (index->count != 0)
	{
		j = index->count;
		//printf("%d \n" , j);
		//printf("%d \n", stack_b->array[j + 1]);
		while (j > 1)
		{
			printf("p = %d \n", stack_b->array[j]);
			stack_b->array[j + 1] = stack_b->array[j];
			j--;
		}
		if (j == 1)
			stack_b->array[j] = a;
	}
	index->count += 1;
	stack_b->j++;;
	index->count3++;
	index->count2++;
	write(1, "pb\n", 3);
}

void	push_a(t_stack *stacka, t_stack *stackb, t_iter *index)
{
	stacka->array[index->count3 - 1] = stackb->array[index->count4];
	index->count3--;
	index->count4++;
	index->count2--;
}     