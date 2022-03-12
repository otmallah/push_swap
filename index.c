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

void	ft_rand_100(t_stack *sta, t_stack *st_tmp, t_iter *id)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= id->num_arg - 1)
	{
		while (j <= id->num_arg - 1)
		{
			if (sta->array[i] == st_tmp->array[j])
			{
				sta->array[i] = j;
				break ;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	suiii(t_stack *sta, t_iter *id)
{
	int	i;

	i = 0;
	if (sta->array[i] > sta->array[i + 1])
		swap_a(sta, id);
	else if (sta->array[i] < sta->array[i + 1])
		swap_a(sta, id);
}
