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

void    ft_rand_100(t_stack *stacka, t_stack *stack_temp)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (stacka->array[i])
    {
        while (stack_temp->array[j])
        {
            if (stack_temp->array[i] == stacka->array[j])
                stacka->array[i] = j;
            j++;
        }
        j = 0;
        i++;
    }
}

void    rand_again(t_stack *stacka, t_stack *stack_temp, t_iter *index)
{
    int i;

    i = 0;
    ft_rand_100(stacka, stack_temp);
    while (stacka->array[i])
    {
        if (stacka->array[i] >= 0 && stacka->array[i] <= 19)
        {
            printf("num = %d \n", i);
        }
        i++;
    }
    
}