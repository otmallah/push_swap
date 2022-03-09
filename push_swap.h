#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

//linked list function

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}		t_list;

typedef struct s_stack
{
	int i;
	int j;
	int	*array;
}	t_stack;

typedef struct s_iter
{
	int count;
	int count2;
	int count3;
	int count4;
	int count5;
	int idx;
	int num_arg;
	int num_sec;
}	t_iter;


int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);


//handler

int	checker(char *str);
void	only_num(char *str);
void	swap_a(t_stack	*stack, t_iter *index);
void	rever_a(t_stack *stack, t_iter	*index);
void	r_rev_a(t_stack	*stack, t_iter	*index);
void    rand_num(t_stack *stack, t_iter *index);
void	push_b(t_stack	*stack_a, t_stack	*stack_b, t_iter *index);
void	rand_5_num(t_stack *stack_a, t_stack *stack_b, t_iter *index);
void	push_a(t_stack *stacka, t_stack *stackb, t_iter *index);
void    ft_sort_param(t_stack *stack_temp , int ac);
void    rand_again(t_stack *stacka, t_stack *stack_temp, t_stack *stackb, t_iter *index);
void	re_b(t_stack *stackb, t_iter *index);
void	r_rev_b(t_stack *stackb , t_iter *index);
#endif