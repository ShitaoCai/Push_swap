/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   node_helpers.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-rove <mde-rove@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 18:21:42 by mde-rove      #+#    #+#                 */
/*   Updated: 2026/11/25 17:05:34 by mde-rove      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_node	*new_node(int number)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node -> value = number;
	node -> next = NULL;
	node -> prev = NULL;
	return (node);
}
