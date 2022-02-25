
#include "push_swap.h"

typedef struct s_test
{
	int	**tab;
	int	**tab2;
}	t_test;

int	checker(char *str)
{
	int num;

	if (str[0] == '0' || (str[0] == '-' && str[1] == '1'))
	{
		num = ft_atoi(str);
		if (num >= -2147483648 && num <= 2147483647)
			return (1);
		else
			return (5);
	}
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

void	only_num(char *str)
{
	int i = 0;
	int res;

	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			write (1, "only num\n", 10);
			exit(0);
		}
	}
	res = checker(str);
	if (res != 1)
	{
		write (1, "only integer\n", 14);
		exit(0);
	}
}

void	ft_print_parametre(int s, char **b)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (a <= (s - 1))
	{
		while (b[a][i])
		{
			write (1, &b[a][i], 1);
			i++;
		}
		i = 0;
		write (1, "\n", 1);
		a++;
	}
}

int main(int ac, char **av)
{
	int j, i;
	int num;
	char	*temp;

	j = 1;
	i = 1;
	if (ac >= 3)
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
		j = 1;
		while(j < (ac - 1))
		{
			num = strcmp(av[j], av[j + 1]);
			if (num > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
				j = -1;
			}
			j++;
		} 
		ft_print_parametre(ac, av);

	}
	else
		write (1, "moore", 6);
}
