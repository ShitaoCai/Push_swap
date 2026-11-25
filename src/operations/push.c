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
#include "ft_printf.h"

static void	push_stack(t_stack *dst, t_stack *src)
{
	t_node	*temp;

	temp = src->top;
	src->top = src->top->next;
	if (src->top)
		src->top->prev = NULL;
	src->size--;
	if (src->size == 0)
		src->bottom = NULL;
	temp->prev = NULL;
	temp->next = dst->top;
	if (dst->top)
		dst->top->prev = temp;
	dst->top = temp;
	dst->size++;
	if (dst->size == 1)
		dst->bottom = dst->top;
}

void	pa(t_stack *a, t_stack *b)
{
	if (!a || !b || !b->top)
		return ;
	push_stack(a, b);
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a || !b || !a->top)
		return ;
	push_stack(b, a);
	ft_printf("pb\n");
}
