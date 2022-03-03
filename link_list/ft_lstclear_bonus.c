/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:21:17 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/14 19:21:19 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int	i;

	i = 0;
	if (!del || !lst || !*lst)
		return ;
	while (lst[i])
	{
		del(lst[i]->content);
		free(lst[i]);
		lst[i] = lst[i]->next;
	}
}
