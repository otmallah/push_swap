/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:07:57 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/07 23:08:00 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     ft_sort_param(t_stack *stack_temp , int ac)
{
	int i;
	int temp = 0;

	i = 0;
	while (i < ac - 1)
	{
		if (stack_temp->array[i] > stack_temp->array[i + 1])
		{
			temp = stack_temp->array[i];
			stack_temp->array[i] = stack_temp->array[i + 1];
			stack_temp->array[i + 1] = temp;
			i = -1;
		}
		i++;
	}
	//i = 0;
	//while (i < ac)
	//{
	//printf(" num temp  == %d \n" , stack_temp->array[i]);
	//i++;
	//}
}

	// int i;
	// int j;
	// //int k;

	// i = index->count3;// i   = 4 ;
	// //printf("paaok == %d \n" , i);
	// j = index->num_arg / 2;
	// //k = index->num_arg - 1;
	// //printf("haa == %d  index = %d , idx === %d \n" , stack->array[index->count3] , index->count3 , idx);
	// //printf("i == ------ %d\n" , i);
	// if (idx < j)
	// {
	// 	while (i < idx)
	// 	{
	// 		rever_a(stack, index);
	// 		i++;
	// 	}
	// 	push_b(stack, stackb, index);
	// }
	// else
	// {
	// 	while (i < ((index->num_arg + 1) - idx))
	// 	{
	// 		r_rev_a(stack, index);
	// 		i++;
	// 	}
	// 	push_b(stack, stackb, index);
	// }