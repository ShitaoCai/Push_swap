/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   simple_sort.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/25 14:45:09 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/25 14:45:09 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotation_checker(t_stack *a, t_node *target);

void	simple_sort(t_stack *a, t_stack *b)
{
	t_node	*temp;
	t_node	*i;

	while (a->top)
	{
		i = a->top;
		temp = a->top;
		while (i)
		{
			if (temp->value > i->value)
				temp = i;
			i = i->next;
		}
		while (temp!=a->top)
		{
			if (rotation_checker(a, temp))
				ra(a);
			else
				rra(a);
		}
		pb(a, b);
	}
	while (b->top)
		pa(a, b);
}

int	rotation_checker(t_stack *a, t_node *target)
{
	t_node	*current;
	int		count;

	current = a->top;
	count = 0;
	while (current != target)
	{
		current = current->next;
		count++;
	}
	if (count <= a->size - count)
		return (1);
	return (0);
}

