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

void    rand_num(t_stack *stack)
{
    if (stack->array[0] < stack->array[1] && stack->array[0] < stack->array[2] && stack->array[1] < stack->array[2])
        puts("m9adine hh");
    if (stack->array[0] > stack->array[1] && stack->array[1] < stack->array[2] && stack->array[2] > stack->array[0])
        swap_a(stack);
    else if (stack->array[2] < stack->array[1] && stack->array[1] < stack->array[0] && stack->array[2] < stack->array[0])
    {
        swap_a(stack);
        r_rev_a(stack);
    }
    else if (stack->array[0] > stack->array[1] && stack->array[1] < stack->array[2] && stack->array[0] > stack->array[2])
        rever_a(stack);
    else if (stack->array[0] <  stack->array[1] && stack->array[0] < stack->array[2] && stack->array[1] > stack->array[2])
    {
        swap_a(stack);
        rever_a(stack);
    }
    else if (stack->array[0] < stack->array[1] && stack->array[1] > stack->array[2] && stack->array[0] > stack->array[2])
        r_rev_a(stack);
}