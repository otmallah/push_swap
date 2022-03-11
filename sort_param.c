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

void	ft_sort_param(t_stack *stack_temp, int ac)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
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
}
