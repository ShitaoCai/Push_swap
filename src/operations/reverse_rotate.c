/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 15:48:27 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/22 16:10:34 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void	rra(t_stack *a)
{
	t_node	*temp;

	if (a->size < 2)
		return ;
	temp = a->bottom;
	a->bottom = a->bottom->prev;
	a->bottom->next = NULL;
	temp->prev = NULL;
	temp->next = a->top;
	a->top->prev = temp;
	a->top = temp;
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	t_node	*temp;

	if (b->size < 2)
		return ;
	temp = b->bottom;
	b->bottom = b->bottom->prev;
	b->bottom->next = NULL;
	temp->prev = NULL;
	temp->next = b->top;
	b->top->prev = temp;
	b->top = temp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	ft_printf("rrr\n");
}
