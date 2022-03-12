/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:49:10 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/12 14:49:11 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_stack *sta, t_stack *stb, t_iter *index)
{
	swap_a2(sta, index);
	swap_b(stb, index);
}

void	rr(t_stack *sta, t_stack *stb, t_iter *index)
{
	rever_a2(sta, index);
	re_b2(stb, index);
}

void	rrr(t_stack *sta, t_iter *index)
{
	r_rev_a2(sta, index);
	r_rev_b2(sta, index);
}
