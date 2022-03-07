all :
	gcc -Wall -Wextra -Wextra push_swap.c stack_a/swap.c stack_a/swap_b.c swap_3_rand.c swap_5_rand.c test.c atoi.c  -o push_swap -fsanitize=address