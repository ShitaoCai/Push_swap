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

	if (!a || !b || !b->top)
		return ;
	temp = b->top;
	b->top = b->top->next;
	if (b->top)
		b->top->prev = NULL;
	b->size--;
	if (b->size == 0)
		b->bottom = NULL;
	temp->prev = NULL;
	temp->next = a->top;
	if (a->top)
		a->top->prev = temp;
	a->top = temp;
	a->size++;
	if (a->size == 1)
		a->bottom = a->top;
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (!a || !b || !a->top)
		return ;
	temp = a->top;
	a->top = a->top->next;
	if (a->top)
		a->top->prev = NULL;
	a->size--;
	if (a->size == 0)
		a->bottom = NULL;
	temp->prev = NULL;
	temp->next = b->top;
	if (b->top)
		b->top->prev = temp;
	b->top = temp;
	b->size++;
	if (b->size == 1)
		b->bottom = b->top;
}
