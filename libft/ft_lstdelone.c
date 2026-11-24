/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/21 12:27:38 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/21 15:17:28 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst -> content);
	free(lst);
}

/* static void	del(void *content)
{
	free(content);
}

int	main(void)
{
	int		*value;
	t_list	*node;

	value = malloc(sizeof(int));
	if (!value)
		return (1);
	*value = 42;
	node = ft_lstnew(value);
	if (!node)
	{
		free(value);
		return (1);
	}
	printf("Before deletion: %d\n", *(int *)node->content);
	ft_lstdelone(node, del);
	printf("Node deleted successfully.\n");
	return (0);
}
 */