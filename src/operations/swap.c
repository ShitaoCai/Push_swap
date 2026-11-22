/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 15:47:34 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/22 16:00:24 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int	temp;

	temp = a->top->value;
	a->top->value = a->top->next->value;
	a->top->next->value = temp;
}

void	sb(t_stack *b)
{
	int	temp;

	temp = b->top->value;
	b->top->value = b->top->next->value;
	b->top->next->value = temp;
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
