/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   disorder.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-rove <mde-rove@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/27 17:46:44 by mde-rove      #+#    #+#                 */
/*   Updated: 2026/11/27 17:47:53 by mde-rove      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	disorder_ratio(t_stack *a)
{
	t_node		*current;
	t_node		*nxt;
	long long	size_a;
	double		pairs;
	double		mistakes;
	
	current = a->top;
	size_a = a->size;
	pairs = (size_a * (size_a - 1)) / 2;
	mistakes = 0;
	while (current)
	{
		nxt = current->next;
		while (nxt)
		{
			
			if (current->value > nxt->value)
				mistakes += 1;
			nxt = nxt->next;
		}
		current = current->next;
	}
	return (mistakes / pairs);
}
