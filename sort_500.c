/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:42:29 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/09 20:42:30 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort_500(t_stack *stacka, t_stack *stack_temp, t_stack *stackb, t_iter *index)
{
	index->num_arg = index->num_arg - 400;
	rand_again(stacka, stack_temp, stackb, index);
	index->num_arg = index->num_arg - 300;
	rand_again(stacka, stack_temp, stackb, index);
	index->num_arg = index->num_arg - 200;
	rand_again(stacka, stack_temp, stackb, index);
	index->num_arg = index->num_arg - 100;
	rand_again(stacka, stack_temp, stackb, index);
}