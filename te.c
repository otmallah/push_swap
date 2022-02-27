#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

int top = 0;
int empty = 0;
int	size = 5;
int tab[5];

int	push(int value)
{
	if (top >= (size))
		return 1;
	tab[top] = value;
	top++;
	return 0;
}

int pop()
{
	int a;

	if (top == empty)
		return 0;
	top--;
	a = tab[top];
	return a;
}

int main(void)
{
	push(15);
	push(223);
	push(120);
	push(187);
	push(14);

	int res;
	res = pop();
	printf("%d \n", res);
	res = pop();
	printf("%d \n", res);
	res = pop();
	printf("%d \n", res);
	res = pop();
	printf("%d \n", res);
	res = pop();
	printf("%d \n", res);
}