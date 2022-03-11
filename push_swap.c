#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include "push_swap.h"

int	ft_tablen(t_stack	*stacka);

int		push(t_stack *stack, int len, int value, t_stack *temp)
{
	if (!stack->array)
		stack->i = 0;
	if (!stack->array)
	{
		//puts("here");
		stack->array = malloc(sizeof(int) * (len));
		temp->array = malloc(sizeof(int) * (len));
	}
	if (stack->i == len)
		return 1;
	stack->array[stack->i] = value;
	temp->array[stack->i] = value;
	//printf("staack a = %d \n" , temp->array[stack->i]);
	stack->i++;
	return 0;
}

void	ft_printa(t_stack	*stack , t_iter *index, int a)
{
	puts("--------stack a---------");
	while (index->count3 < a)
	{
		printf("|          %d           |\n" ,  stack->array[index->count3]);
		index->count3++;
	}
}

void	ft_printb(t_stack	*stack, t_iter *index)
{
	puts("--------stack b---------");
	while (index->count4 < index->count2)
	{
		printf("|          %d           |\n" ,  stack->array[index->count4]);
		index->count4++;
	}
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 1;
	int a = ac - 1;

	t_stack stack;
	t_stack stackb;
	t_stack stack_temp;
	t_iter index;

	index.count = 0;
	index.idx = -1;
	index.idx2 = -1;
	index.count2 = 0;
	index.count3 = 0;
	index.count4 = 0;
	index.count5 = 0;
	//stack_temp.array = 0;
	stack.j = -1;
	index.num_arg = a;
	index.num_sec = a;
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
						write(1, "Error\n", 7);
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
			push(&stack, a, ft_atoi(av[j]), &stack_temp);
			j++;
			i++;
		}
		//ft_sort_param(&stack_temp, a);
		//ft_rand_100(&stack, &stack_temp, &index);
		if (ac == 4)
			rand_num(&stack, &index);
		else if (ac != 101 && ac != 501 && ac )
		{
			//puts("hana");
			stackb.array = (int *)malloc(sizeof(int) * a);
			ft_sort_param(&stack_temp, a);
			ft_sort_all(&stack, &stackb, &stack_temp, &index);
		}
		else if (ac == 6)
		{
			stackb.array = (int *)malloc(sizeof(int) * a);
			rand_5_num(&stack, &stackb, &index);
		}
		else if (ac == 101 || ac == 501)
		{
			//puts("pppppok");
			stackb.array = (int *)malloc(sizeof(int) * a);
			ft_sort_param(&stack_temp, a);
			rand_again(&stack,&stack_temp, &stackb, &index);
		}
		//ft_printb(&stackb, &index);
		//ft_printa(&stack, &index, a);
		//rand_num(&stack, &index);
	}
	//system("leaks push_swap");
}
