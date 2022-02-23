
#include "push_swap.h"

typedef struct s_test
{
	int	**tab;
	int	**tab2;
}	t_test;

int	checker(char *str)
{
	int num;

	num = ft_atoi(str);
	if (num != 0 && num != -1)
	{
		if (num >= -2147483648 && num <= 2147483647)
		{
			return (1);
		}
		else
			return (5);
	}
	return 0;
}


int main(int ac, char **av)
{
	int i;
	int j;
	int	res;
	int num;
	t_test id;

	i = 0;
	j = 1;
	if (ac >= 3)
	{
		while (av[j])
		{
			if (av[j][0] == '-' || av[j][0] == '+')
				i = 1;
			while (av[j][i])
			{
				if (av[j][i] >= '0' && av[j][i] <= '9')
					i++;
				else
				{
					write (1, "only num\n", 10);
					exit(0);
				}
			}
			res = checker(av[j]);
			if (res != 1)
			{
				write (1, "only integer\n", 14);
				exit(0);
			}
			i = 0;
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
	}
	else
		write (1, "moore", 6);
}
