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

#endif