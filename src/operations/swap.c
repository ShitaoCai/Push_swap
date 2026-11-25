/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 15:47:34 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/25  by shicai              ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_stack(t_stack *stack)
{
	int	temp;

	if (!stack || stack->size < 2)
		return ;
	temp = stack->top->value;
	stack->top->value = stack->top->next->value;
	stack->top->next->value = temp;
}

void	sa(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	swap_stack(a);
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	if (!b || b->size < 2)
		return ;
	swap_stack(b);
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	int	changed;

	changed = 0;
	if (a && a->size >= 2)
	{
		swap_stack(a);
		changed = 1;
	}
	if (b && b->size >= 2)
	{
		swap_stack(b);
		changed = 1;
	}
	if (changed)
		ft_printf("ss\n");
}
