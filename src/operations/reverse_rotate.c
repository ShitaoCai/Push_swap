/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 15:48:27 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/25  by shicai              ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate_stack(t_stack *stack)
{
	t_node	*node;

	if (!stack || stack->size < 2)
		return ;
	node = stack->bottom;
	stack->bottom = node->prev;
	stack->bottom->next = NULL;
	node->prev = NULL;
	node->next = stack->top;
	stack->top->prev = node;
	stack->top = node;
}

void	rra(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	reverse_rotate_stack(a);
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	if (!b || b->size < 2)
		return ;
	reverse_rotate_stack(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	int	changed;

	changed = 0;
	if (a && a->size >= 2)
	{
		reverse_rotate_stack(a);
		changed = 1;
	}
	if (b && b->size >= 2)
	{
		reverse_rotate_stack(b);
		changed = 1;
	}
	if (changed)
		ft_printf("rrr\n");
}
