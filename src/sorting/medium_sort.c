/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   medium_sort.c                                      :+:    :+:            */
/*                                                    +:+ +:+         +:+     */
/*   By: shicai <shicai@student.codam.nl>            +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 12:00:00 by shicai            #+#    #+#             */
/*   Updated: 2026/11/28 12:00:00 by shicai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	assign_ranks(t_stack *a)
{
	t_node	*node;
	t_node	*other;
	int		sorted;

	sorted = 1;
	node = a->top;
	while (node)
	{
		node->rank = 0;
		other = a->top;
		while (other)
		{
			if (other->value < node->value)
				node->rank++;
			other = other->next;
		}
		if (node->next && node->value > node->next->value)
			sorted = 0;
		node = node->next;
	}
	return (sorted);
}

static int	chunk_width(int size)
{
	int	width;

	width = 1;
	while ((long long)width * width < size)
		width++;
	return (width);
}

static void	push_chunk(t_stack *a, t_stack *b, int low, int high)
{
	int	left;

	left = a->size;
	while (left > 0)
	{
		if (a->top->rank >= low && a->top->rank < high)
			pb(a, b);
		else
			ra(a);
		left--;
	}
}

static void	restore_rank(t_stack *a, t_stack *b, int target)
{
	int	rotations;

	rotations = 0;
	while (b->top->rank != target)
	{
		rb(b);
		rotations++;
	}
	pa(a, b);
	while (rotations > 0 && b->size > 1)
	{
		rrb(b);
		rotations--;
	}
}

void	medium_sort(t_stack *a, t_stack *b)
{
	int	size;
	int	width;
	int	low;
	int	high;

	if (!a || !b)
		return ;
	if (assign_ranks(a))
		return ;
	size = a->size;
	width = chunk_width(size);
	low = 0;
	while (low < size)
	{
		high = size;
		if (size - low > width)
			high = low + width;
		push_chunk(a, b, low, high);
		low = high;
	}
	while (size > 0)
		restore_rank(a, b, --size);
}
