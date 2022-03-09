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

void	ft_sort_100_num(t_stack *stacka, t_stack *stackb, t_iter *index);

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

void    rand_again(t_stack *stacka, t_stack *stack_temp, t_stack *stackb, t_iter *index)
{
	int i;
	int ac;
	int count;

	i = 0;
	count = 0;
	ac = 0;
	ft_rand_100(stacka, stack_temp, index);
	while (ac < index->num_arg)
	{
		ac = ac + (index->num_arg / 5);
		while (ac > i)
		{
			//printf("ac === %d \n" , ac);
			if ( stacka->array[index->count3] >= count  && stacka->array[index->count3] < ac)
			{
				push_b(stacka, stackb, index);
				i++;
			}
			else if (stacka->array[index->count3] < ac)
			{
				r_rev_a(stacka, index);
			}
			else
				rever_a(stacka, index);
		}
		i = ac;
		count = ac;
	}
	//r_rev_b(stackb, index);
	//r_rev_b(stackb, index);
	//r_rev_b(stackb, index);
	//r_rev_b(stackb, index);
	//re_b(stackb, index);
	ft_sort_100_num(stacka, stackb, index);
}

void	ft_sort_100_num(t_stack *stacka, t_stack *stackb, t_iter *index)
{
	int i;
	//int j;


	i = index->num_arg - 1;
	//printf("%d \n" , i);
	while (i >= 0)
	{
		if (stackb->array[index->count4] == i)
		{
			push_a(stacka, stackb, index);
			i--;
		}
		else if (stackb->array[index->count4] < i)
		{
			re_b(stackb, index);
		}
		else
			r_rev_b(stackb, index);
	}
}