/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 15:47:54 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/22 16:09:25 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (b->size == 0)
		return ;
	temp = b->top;
	b->top = b->top->next;
	if (b->top)
		b->top->prev = NULL;
	b->size--;
	temp->next = a->top;
	if (a->top)
		a->top->prev = temp;
	a->top = temp;
	a->size++;
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (a->size == 0)
		return ;
	temp = a->top;
	a->top = a->top->next;
	if (a->top)
		a->top->prev = NULL;
	a->size--;
	temp->next = b->top;
	if (b->top)
		b->top->prev = temp;
	b->top = temp;
	b->size++;
}

void	pa_pb(t_stack *a, t_stack *b)
{
	pa(a, b);
	pb(a, b);
}
