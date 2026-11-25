/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_simple.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/25 16:15:32 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/25 16:15:32 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_stack(t_stack *stack, int *values, int count)
{
	t_node	*node;
	int		i;

	i = 0;
	while (i < count)
	{
		node = new_node(values[i]);
		if (stack->bottom)
		{
			stack->bottom->next = node;
			node->prev = stack->bottom;
		}
		else
			stack->top = node;
		stack->bottom = node;
		stack->size++;
		i++;
	}
}

static int	is_sorted(t_stack *stack)
{
	t_node	*node;

	node = stack->top;
	while (node && node->next)
	{
		if (node->value > node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}

int	main(void)
{
	int		values[] = {3, 1, 2};
	t_stack	*a;
	t_stack	*b;

	a = new_stack();
	b = new_stack();
	if (!a || !b)
		return (1);
	fill_stack(a, values, 3);
	simple_sort(a, b);
	if (is_sorted(a) && b->size == 0)
		ft_putendl_fd("PASS", 2);
	else
		ft_putendl_fd("FAIL", 2);
	return (0);
}