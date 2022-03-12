/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norme.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:53:54 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/12 14:53:56 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_sort(t_stack *stacka, t_iter *index);

int	suii(char *str, t_stack *stacka, t_stack *stackb, t_iter *index)
{
	if (ft_strcmp(str, "pa") == 0)
		push_a2(stacka, stackb, index);
	else if (ft_strcmp(str, "pb") == 0)
		push_b2(stacka, stackb, index);
	else if (ft_strcmp(str, "sa") == 0)
		swap_a2(stacka, index);
	else if (ft_strcmp(str, "sb") == 0)
		swap_b(stackb, index);
	else if (ft_strcmp(str, "ra") == 0)
		rever_a2(stacka, index);
	else if (ft_strcmp(str, "rra") == 0)
		r_rev_a2(stacka, index);
	else if (ft_strcmp(str, "rb") == 0)
		re_b2(stackb, index);
	else if (ft_strcmp(str, "rrb") == 0)
		r_rev_b2(stackb, index);
	else if (ft_strcmp(str, "rrr") == 0)
		rrr(stacka, index);
	else if (ft_strcmp(str, "rr") == 0)
		rr(stacka, stackb, index);
	else if (ft_strcmp(str, "ss") == 0)
		ss(stacka, stackb, index);
	else
		return (1);
	return (0);
}

void	check_ok_ko(t_stack *stacka, t_iter *index)
{
	int	i;

	i = index->count3;
	while (i < index->num_arg - 1)
	{
		if (stacka->array[i] > stacka->array[i + 1])
		{
			write(1, "9KO\n", 3);
			exit(1);
		}
		i++;
	}
	if (stacka->array[index->count3] == stacka->array[0])
		write (1, "OK \n", 4);
	else
		write (1, "KO \n", 4);
}

void	ft_checker_inst(t_stack *stacka, t_stack *stackb, t_iter *index)
{
	char	*str;
	int		res;

	str = get_next_line(0);
	if (str == NULL)
	{
		check_sort(stacka, index);
		write(1, "KO\n", 3);
		exit(1);
	}
	while (str != NULL)
	{
		res = suii(str, stacka, stackb, index);
		if (res == 1)
		{
			write(1, "Error\n", 7);
			exit(1);
		}
		str = get_next_line(0);
	}
	check_ok_ko(stacka, index);
}

void	check_sort(t_stack *stacka, t_iter *index)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < (index->num_arg - 1))
	{
		if (stacka->array[i] < stacka->array[i + 1])
			j++;
		i++;
	}
	if (j == index->num_arg - 1)
	{
		write (1, "OK\n", 12);
		exit(0);
	}
}
