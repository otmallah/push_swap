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

int	hh(t_stack	*stack)
{
	float	i;
	float	p = 0;
	int		a = 0;
	int		b= 0;

	while (a < 5)
	{
		i = stack->array[a] / 2;
		if (a == 0)
		{
			p = i;
			b = stack->array[a];
		}
		if (i < p)
		{
			p = i;
			b = stack->array[a];
		}
		a++;
	}
	return a;
}

void	rand_5_num(t_stack *stack_a, t_stack *stack_b)
{
	int res;
	int i;

	i = 0;
	res = hh(stack_a);
	printf("%d \n", res);
	r_rev_a(stack_a);
	stack_b->array[stack_b->j] = stack_a->array[res];
	stack_b->j++;
}