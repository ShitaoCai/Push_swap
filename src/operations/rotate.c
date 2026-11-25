/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 15:48:06 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/22 16:09:48 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void	ra(t_stack *a)
{
	t_node	*temp;

	if (a->size < 2)
		return ;
	temp = a->top;
	a->top = a->top->next;
	a->top->prev = NULL;
	temp->next = NULL;
	a->bottom->next = temp;
	temp->prev = a->bottom;
	a->bottom = temp;
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	t_node	*temp;

	if (b->size < 2)
		return ;
	temp = b->top;
	b->top = b->top->next;
	b->top->prev = NULL;
	temp->next = NULL;
	b->bottom->next = temp;
	temp->prev = b->bottom;
	b->bottom = temp;
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	ft_printf("rr\n");
}
