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
	stack_b->array[index->count] = stack_a->array[index->count];
	index->count += 1;
	write(1, "pb\n", 3);
}
