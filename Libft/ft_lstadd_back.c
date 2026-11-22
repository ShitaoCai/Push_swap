/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/21 11:59:16 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/21 12:27:13 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (!*lst)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	i = ft_lstlast(*lst);
	i -> next = new;
}

/* #include <stdio.h>
int	main(void)
{
	int	a = 1;
	int b = 2;
	int c = 3;
	t_list	*q = ft_lstnew(&a);
	t_list	*w = ft_lstnew(&b);
	t_list	*e = ft_lstnew(&c);
	t_list	*list = q;
	q -> next = w;
	printf("end of the list: %d\n", *(int *)ft_lstlast(list) -> content);
	ft_lstadd_back(&list, e);
	printf("new end of the list: %d\n", *(int *)ft_lstlast(list) -> content);
	free(q);
	free(w);
	free(e);
	return (0);
}
 */