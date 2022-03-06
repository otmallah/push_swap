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

//int	hh(t_stack	*stack)
//{
//	float	i;
//	float	p = 0;
//	int		a = 0;
//	int		b= 0;
//
//	while (a < 5)
//	{
//		puts("here");
//		i = stack->array[a] / 2;
//		if (a == 0)
//		{
//			p = i;
//			b = stack->array[a];
//		}
//		if (i < p)
//		{
//			p = i;
//			b = stack->array[a];
//		}
//		a++;
//	}
//	return b;
//}
//
//int	find_index(t_stack *stacka, int res)
//{
//	int i;
//
//	i = 0;
//	while (stacka->array[i])
//	{
//		if (stacka->array[i] == res)
//		{
//			return	i;
//			puts("here");
//		}
//		i++;
//	}
//	return 0;
//}


//void	ft_resize(int i, t_stack *stacka, int len)
//{
//	int *tab;
//	int a = 0;
//
//	tab = (int *)malloc(sizeof(int) * (len - 1));
//	
//}

void	rand_5_num(t_stack *stack_a, t_stack *stack_b, t_iter *index)
{
	push_b(stack_a, stack_b, index);
	push_b(stack_a, stack_b, index);
	rand_num(stack_a, index);
	push_a(stack_a, stack_b, index);
	//rever_a(stack_a, index);
	//swap_a(stack_a, index);
	push_a(stack_a, stack_b, index);
	rever_a(stack_a, index);
}