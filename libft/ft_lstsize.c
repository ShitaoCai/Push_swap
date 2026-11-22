/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/21 10:33:03 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/21 10:44:57 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
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
	t_list	*list;
	q -> next = w;
	w -> next = e;
	list = q;
	printf("number of nodes:%d\n", ft_lstsize(list));
	return(0);
}
 */