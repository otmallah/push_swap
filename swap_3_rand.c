/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_3_rand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:59:09 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/05 16:59:10 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    rand_num(t_stack *stack , t_iter *index)
{
    if (stack->array[index->count3] > stack->array[index->count3 + 1] && stack->array[index->count3 + 1] < stack->array[index->count3 + 2] && stack->array[index->count3 + 2] > stack->array[index->count3])
        swap_a(stack, index);
    else if (stack->array[index->count3 + 2] < stack->array[index->count3 + 1] && stack->array[index->count3 + 1] < stack->array[index->count3] && stack->array[index->count3 + 2] < stack->array[index->count3])
    {
        swap_a(stack , index);
        r_rev_a(stack, index);
    }
    else if (stack->array[index->count3] > stack->array[index->count3 + 1] && stack->array[index->count3 + 1] < stack->array[index->count3 + 2] && stack->array[index->count3] > stack->array[index->count3 + 2])
        rever_a(stack, index);
    else if (stack->array[index->count3] <  stack->array[index->count3 + 1] && stack->array[index->count3] < stack->array[index->count3 + 2] && stack->array[index->count3 + 1] > stack->array[index->count3 + 2])
    {
        swap_a(stack, index);
        rever_a(stack, index);
    }
    else if (stack->array[index->count3] < stack->array[index->count3 + 1] && stack->array[index->count3 + 1] > stack->array[index->count3 + 2] && stack->array[index->count3] > stack->array[index->count3 + 2])
        r_rev_a(stack, index);
}