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

static t_node	*find_min(t_stack *a);
static int		rotation_checker(t_stack *a, t_node *target);
static void		rotate_min_to_top(t_stack *a, t_node *minimum);

static int	check_sorted(t_stack *a)
{
	t_node	*current;

	if (!a)
		return (0);
	current = a->top;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

static t_node	*find_min(t_stack *a)
{
	t_node	*current;
	t_node	*minimum;

	current = a->top;
	minimum = a->top;
	while (current)
	{
		if (current->value < minimum->value)
			minimum = current;
		current = current->next;
	}
	return (minimum);
}

static int	rotation_checker(t_stack *a, t_node *target)
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

static void	rotate_min_to_top(t_stack *a, t_node *minimum)
{
	while (minimum != a->top)
	{
		if (rotation_checker(a, minimum))
			ra(a);
		else
			rra(a);
	}
}

void	simple_sort(t_stack *a, t_stack *b)
{
	t_node	*minimum;

	if (!a || !b || check_sorted(a))
		return ;
	while (a->top)
	{
		minimum = find_min(a);
		rotate_min_to_top(a, minimum);
		pb(a, b);
	}
	while (b->top)
		pa(a, b);
}
