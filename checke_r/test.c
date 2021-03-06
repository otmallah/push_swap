/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:01:24 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/13 00:01:26 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
