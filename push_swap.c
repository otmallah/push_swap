#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include "push_swap.h"

int		push(t_stack *stack, int len, int value)
{
	if (!stack->array)
		stack->i = 0;
	if (!stack->array)
		stack->array = malloc(sizeof(int) * len);
	if (stack->i == len)
		return 1;
	stack->array[stack->i] = value;
	stack->i++;
	return 0;
}

void	swap_a(t_stack	*stack)
{
	int i = 0;
	int a;

	a = stack->array[i];
	stack->array[i]=  stack->array[i + 1];
	stack->array[i + 1] = a;
	write(1, "sa\n", 3);
}


void	rever_a(t_stack *stack)
{
	int i;
	int a;

	i = 0;
	a = stack->array[i];
	while (i < (stack->i - 1))
	{
		stack->array[i] = stack->array[i + 1];
		i++;
	}
	if (i == (stack->i - 1))
		stack->array[i] = a;
	write(1, "ra\n", 3);
}

void	r_rev_a(t_stack	*stack)
{
	int a;
	int j = stack->i - 1;

	a = stack->array[j];
	while (j > 0)
	{
		stack->array[j] = stack->array[j - 1];
		j--;
	}
	if (j == 0)
		stack->array[j] = a;
	write(1, "rra\n", 4);
}

void	push_b(t_stack	*stack_a, t_stack	*stack_b)
{
	int i = 0;

	stack_b->array = malloc(sizeof(int));
	stack_b->array[i] = stack_a->array[i];
	write(1, "pb\n", 3);
}

void	ft_printa(t_stack	*stack , int a)
{
	int i = 0;

	puts("--------stack a---------");
	while (i < a)
	{
		printf("|          %d           |\n" ,  stack->array[i]);
		i++;
	}
}

void	ft_printb(t_stack	*stack)
{
	int i = 0;

	puts("--------stack b---------");
		printf("|          %d           |\n" ,  stack->array[i]);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 1;
	int a = ac - 1;
	t_stack stack;
	//t_stack stackb;

	if (ac == 1)
		exit(0);
	while (av[j])
	{
		only_num(av[j]);
		j++;
	}
	j = 1;
	i = 1;
	while (av[j])
	{
		while (av[i])
		{
			if (i != j)
			{
				if (strcmp(av[j], av[i]) == 0)
				{
					printf("%s", av[i]);
					write(1, "duplicate\n", 11);
					exit(1);
				}
			}
			i++;
		}
		i = 1;
		j++;
	}
	i = 0;
	j = 1;
	while (i < a)
	{
		push(&stack, a, ft_atoi(av[j]));
		j++;
		i++;
	}
	//push_b(&stack, &stackb);
	swap_a(&stack);
	//rever_a(&stack);
	//r_rev_a(&stack);
	//ft_printb(&stackb);
	//ft_printa(&stack, a);
}	
