/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 15:48:06 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/25  by shicai              ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_stack(t_stack *stack)
{
	t_node	*node;

	if (!stack || stack->size < 2)
		return ;
	node = stack->top;
	stack->top = node->next;
	stack->top->prev = NULL;
	node->next = NULL;
	node->prev = stack->bottom;
	stack->bottom->next = node;
	stack->bottom = node;
}

void	ra(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	rotate_stack(a);
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	if (!b || b->size < 2)
		return ;
	rotate_stack(b);
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	int	changed;

	changed = 0;
	if (a && a->size >= 2)
	{
		rotate_stack(a);
		changed = 1;
	}
	if (b && b->size >= 2)
	{
		rotate_stack(b);
		changed = 1;
	}
	if (changed)
		ft_printf("rr\n");
}
