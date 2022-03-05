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
	t_stack stackb;
	//t_iter index;

	stackb.j = 0;
	if (ac == 1)
		exit(0);
	if (ac > 2)
	{
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
		//stack.i--;
		if (ac == 4)
			rand_num(&stack);
		if (ac == 6)
		{
			stackb.array = malloc(sizeof(int) * 1);
			rand_5_num(&stack, &stackb);
			ft_printb(&stackb);
		}
		ft_printa(&stack, a);
		//system("leaks a.out");
	}
}	
