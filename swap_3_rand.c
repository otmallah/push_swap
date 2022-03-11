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

void	norme(t_stack *st, t_iter *id);

void	rand_num(t_stack *st, t_iter *id)
{
	if (st->array[id->count3] > st->array[id->count3 + 1]
		&& st->array[id->count3 + 1] < st->array[id->count3 + 2]
		&& st->array[id->count3 + 2] > st->array[id->count3])
		swap_a(st, id);
	else if (st->array[id->count3 + 2] < st->array[id->count3 + 1]
		&& st->array[id->count3 + 1] < st->array[id->count3]
		&& st->array[id->count3 + 2] < st->array[id->count3])
	{
		swap_a(st, id);
		r_rev_a(st, id);
	}
	else if (st->array[id->count3] > st->array[id->count3 + 1]
		&& st->array[id->count3 + 1] < st->array[id->count3 + 2]
		&& st->array[id->count3] > st->array[id->count3 + 2])
		rever_a(st, id);
	else if (st->array[id->count3] < st->array[id->count3 + 1]
		&& st->array[id->count3] < st->array[id->count3 + 2]
		&& st->array[id->count3 + 1] > st->array[id->count3 + 2])
	{
		swap_a(st, id);
		rever_a(st, id);
	}
	norme(st, id);
}

void	norme(t_stack *st, t_iter *id)
{
	if (st->array[id->count3] < st->array[id->count3 + 1]
		&& st->array[id->count3 + 1] > st->array[id->count3 + 2]
		&& st->array[id->count3] > st->array[id->count3 + 2])
		r_rev_a(st, id);
}
