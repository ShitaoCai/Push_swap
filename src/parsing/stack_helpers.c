/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_helpers.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-rove <mde-rove@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 18:45:17 by mde-rove      #+#    #+#                 */
/*   Updated: 2026/11/25 18:44:54 by mde-rove      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack -> top = NULL;
	stack -> bottom = NULL;
	stack -> size = 0;
	return (stack);
}

int	add_to_stack_bottom(t_stack *a, int number)
{
	t_node	*nwnode;
	t_node	*stackbottom;

	nwnode = new_node(number);
	stackbottom = a -> bottom;
	if (nwnode == NULL)
		return (1);
	if (stackbottom == NULL)
	{
		a -> top = nwnode;
		a -> bottom = nwnode;
		a -> size = 1;
		return (0);
	}
	stackbottom -> next = nwnode;
	a -> bottom = nwnode;
	nwnode -> prev = stackbottom;
	a -> size += 1;
	return (0);
}

void	free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*nxt;

	if (!(stack))
		return ;
	current = stack -> top;
	while (current)
	{
		nxt = current -> next;
		free(current);
		current = nxt;
	}
	free(stack);
}
