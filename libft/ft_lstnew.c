/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/21 09:37:55 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/21 10:03:15 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		a;
	int		b;
	t_list	*first;
	t_list	*second;

	a = 10;
	b = 20;
	first = ft_lstnew(&a);
	second = ft_lstnew(&b);
	if (!first || !second)
		return (1);
	printf("First node: %d\n", *(int *)first->content);
	printf("Second node: %d\n", *(int *)second->content);
	printf("First next: %p\n", (void *)first->next);
	printf("Second next: %p\n", (void *)second->next);
	free(first);
	free(second);
	return (0);
}
 */