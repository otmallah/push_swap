/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_4_rand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:52:45 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/07 17:52:46 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_all(t_stack *stacka, t_stack *stackb, t_iter *index);

int	ft_search3(t_stack *stack, t_iter *index, int idx)
{
	int i;
	int j;
    int k;

	j = 0;
	i = index->count3;
	while (idx != stack->array[i])
	{
		i++;
		j++;
	}
	k =  index->num_arg - i;
	if (j <  k)
		return 0;
	return 1;
}

void    ft_sort_all(t_stack *stacka, t_stack *stackb, t_stack *stack_temp, t_iter *index)
{
    int ac;

    ft_rand_100(stacka, stack_temp, index);
    ac = 0;
    while (ac < index->num_arg)
    {
        if (stacka->array[index->count3] == ac)
        {
            push_b(stacka, stackb, index);
            ac++;
        }
        else if (ft_search3(stacka, index, ac) == 0)
        {
            rever_a(stacka, index);
        }
        else
            r_rev_a(stacka, index);
    }
    push_all(stacka, stackb, index);
}

void    push_all(t_stack *stacka, t_stack *stackb, t_iter *index)
{
    int i;

    i = 0;
    //puts("ha anan");
    while (i < index->num_arg)
    {
        push_a(stacka, stackb, index);
        i++;
    }
}