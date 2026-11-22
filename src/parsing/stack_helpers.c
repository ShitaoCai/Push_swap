/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_helpers.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-rove <mde-rove@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 18:45:17 by mde-rove      #+#    #+#                 */
/*   Updated: 2026/11/22 18:50:45 by mde-rove      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack -> top = NULL;
	stack -> bottom = NULL;
	stack -> size = 0;
	return (stack);
}
