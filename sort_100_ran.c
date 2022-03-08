/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_ran.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:57:25 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/07 23:57:27 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rand_100(t_stack *stacka, t_stack *stack_temp, t_iter *index)
{
	int i;
	int j;

	i = 0;
	j = 0;
	//printf("ooo === %d \n" , stack_temp->array[0]);
	while (i <= index->num_arg - 1)
	{
		while (j <= index->num_arg - 1)
		{
			if (stacka->array[i] == stack_temp->array[j])
			{
				stacka->array[i] = j;
			}
			j++;
		}
		j = 0;
		i++;
	}
}


//void    check_num(t_stack *stack, t_stack *stackb,t_iter *index , int idx)
//{
//	int i;
//	int j;
//	//int k;
//
//	i = index->count3;// i   = 4 ;
//	printf("idx == %d \n" , i);
//	j = index->num_arg / 2;
//	//k = index->num_arg - 1;
//	//printf("haa == %d  index = %d , idx === %d \n" , stack->array[index->count3] , index->count3 , idx);
//	printf("jjjj == ------ %d\n" , j);
//	if (idx < j)
//	{
//		while (i < idx)
//		{
//			rever_a(stack, index);
//			i++;
//		}
//		push_b(stack, stackb, index);
//	}
//	else
//	{
//		while (i < ((index->num_arg + 1) - idx))
//		{
//			r_rev_a(stack, index);
//			i++;
//		}
//		push_b(stack, stackb, index);
//	}
//}

void    rand_again(t_stack *stacka, t_stack *stack_temp, t_stack *stackb, t_iter *index)
{
	int i;
	int ac;

	i = 0;
	ac = index->num_arg / 2;
	ft_rand_100(stacka, stack_temp, index);
	while (ac > i)
	{
		if ( stacka->array[index->count3] >= 0  && stacka->array[index->count3] < ac)
		{
			push_b(stacka, stackb, index);
			i++;
		}
		else if (stacka->array[index->count3] < ac)
		{
			rever_a(stacka, index);
		}
		else
			r_rev_a(stacka, index);
	}

}