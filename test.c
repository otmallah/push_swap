
#include "push_swap.h"


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
