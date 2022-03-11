/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:16:17 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/11 17:16:41 by otmallah         ###   ########.fr       */
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
				break ;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
