/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/21 11:40:11 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/21 11:58:16 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst-> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
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
	w -> next = e;
	printf("the list of int:");
	while (list)
	{
		printf("%d ", *(int *)list -> content);
		if (list -> next == NULL)
			break ;
		list = list -> next;
	}
	printf("\nlast of the list%d\n", *(int *)ft_lstlast(list) -> content);
	free(q);
	free(w);
	free(e);
	return (0);
}
 */