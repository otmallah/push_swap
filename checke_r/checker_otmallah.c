/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_otmallah.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:09:18 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/11 19:09:19 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	check_ok_ko(t_stack *stacka, t_iter *index);
void	check_sort(t_stack *stacka, t_iter *index);
void	norme3(t_stack *stacka, t_iter *index, char **av, t_stack *stb);
void	ft_cheeeck(t_stack *sta, t_stack *temp, t_iter *index, char **av);

int	push(t_stack *stack, t_stack *temp, t_iter *id, int value)
{
	if (!stack->array)
		stack->i = 0;
	if (!stack->array)
		stack->array = malloc(sizeof(int) * (id->num_arg));
	if (stack->i == id->num_arg)
		return (1);
	stack->array[stack->i] = value;
	temp->array[stack->i] = value;
	stack->i++;
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	stacka;
	t_stack	stackb;
	t_stack	temp;
	t_iter	index;

	stacka.i = 0;
	index.count3 = 0;
	index.count = 0;
	index.num_arg = ac - 1;
	if (ac == 1)
		exit(0);
	stackb.array = malloc(sizeof(int) * (index.num_arg));
	temp.array = malloc(sizeof(int) * (index.num_arg));
	ft_cheeeck(&stacka, &temp, &index, av);
	ft_sort_param(&temp, index.num_arg);
	ft_rand_100(&stacka, &temp, &index);
	ft_checker_inst(&stacka, &stackb, &index);
}

void	ft_cheeeck(t_stack *sta, t_stack *temp, t_iter *index, char **av)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i < index->num_arg)
	{
		push(sta, temp, index, ft_atoi(av[j]));
		j++;
		i++;
	}
	i = 0;
	j = 1;
	while (av[j])
	{
		only_num(av[j]);
		j++;
	}
	check(av);
}
