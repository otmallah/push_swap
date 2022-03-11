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

void	check_ok_ko(t_stack *stacka, t_iter *index);
void	check_sort(t_stack *stacka, t_iter *index);
void	norme3(t_stack *stacka, t_iter *index, char **av, t_stack *stb);

int	push(t_stack *stack, t_stack *stackb, t_iter *id, int value)
{
	if (!stack->array)
		stack->i = 0;
	if (!stack->array)
	{
		stack->array = malloc(sizeof(int) * (id->num_arg));
		stackb->array = malloc(sizeof(int) * (id->num_arg));
	}
	if (stack->i == id->num_arg)
		return 1;
	stack->array[stack->i] = value;
	stack->i++;
	return 0;
}

void    ft_checker_inst(t_stack *stacka, t_stack *stackb, t_iter *index)
{
	char *str;

	str = get_next_line(0);
	if (str == NULL)
		exit(0);
	while (str)
	{
		if ( strcmp(str , "pa") == 0)
			push_a2(stacka, stackb, index);
		else if (strcmp(str , "pb") == 0)
			push_b2(stacka, stackb, index);
		else if (strcmp(str , "sa") == 0)
			swap_a2(stacka, index);
		else if (strcmp(str , "ra") == 0)
			rever_a2(stacka, index);
		else if (strcmp(str , "rra") == 0)
			r_rev_a2(stacka, index);
		else if (strcmp(str , "rb") == 0)
			re_b2(stackb, index);
		else if (strcmp(str , "rrb") == 0)
			r_rev_b2(stackb, index);
		str = get_next_line(0);
	}
	check_ok_ko(stacka, index);
}

void	ft_printa(t_stack *stack, t_iter *index, int a)
{
	puts("--------stack a---------");
	while (index->count3 < a)
	{
		printf("|          %d           |\n" ,  stack->array[index->count3]);
		index->count3++;
	}
}

void	check_ok_ko(t_stack *stacka, t_iter *index)
{
	int i;

	i = 0;
	while (i < index->num_arg - 1)
	{
		if (stacka->array[i] > stacka->array[i + 1])
		{
			write(1, "KO\n", 3);
			exit(0);
		}
		i++;
	}
	write (1, "OK\n", 3);
}

int main(int ac , char **av)
{
    t_stack stacka;
    t_stack stackb;
    t_stack stack_temp;
    t_iter index;

	index.count3 = 0;
	index.num_arg = ac - 1;
	if (ac == 1)
		exit(0);
	norme3(&stacka, &index, av, &stackb);
	check_sort(&stacka, &index);
    ft_checker_inst(&stacka, &stackb, &index);
}

void	check_sort(t_stack *stacka, t_iter *index)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < index->num_arg  - 1)
	{
		if (stacka->array[i] < stacka->array[i + 1])
			j++;
		i++;
	}
	if (j == index->num_arg - 1)
	{
		write (1, "already sort hh\n", 17);
		exit(0);
	}
}

void	norme3(t_stack *stacka, t_iter *index, char **av, t_stack *stb)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (av[j])
	{
		only_num(av[j]);
		j++;
	}
	check(av);
	i = 0;
	j = 1;
	while (i < (index->num_arg - 1))
	{
		push(stacka, stb, index, ft_atoi(av[j]));
		j++;
		i++;
	}
}