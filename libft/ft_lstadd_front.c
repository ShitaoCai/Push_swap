/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/21 10:03:35 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/21 10:45:24 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

/* #include <stdio.h>
int	main(void)
{
	char	*a = "Hello";
	char	*b = "World";
	t_list *q;
	t_list *w;
	t_list *list;
	q = ft_lstnew(a);
	w = ft_lstnew(b);
	list = w;
	printf("Original head:%s\n", (char *)list -> content);
	ft_lstadd_front(&list, q);
	printf("new head:%s\n", (char *)list -> content);
	printf("linked list:%s %s\n", (char *)list -> content,
	(char *)list -> next -> content);
	free(q);
	free(w);
	return (0);
}
 */