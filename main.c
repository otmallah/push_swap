
int	hh()
{
	float i;
	float p = 0;
	int a = 0;
	int b= 0;
	int tab[5] = {100, 500, 78, 150, 100};

	while (a < 5)
	{
		i = tab[a] / 2;
		if (a == 0)
		{
			p = i;
			b = tab[a];
		}
		if (i < p)
		{
			p = i;
			b = tab[a];
		}
		a++;
	}
	return b;
}

int main(void)
{
	int a = hh();
	printf("%d \n", a);
}