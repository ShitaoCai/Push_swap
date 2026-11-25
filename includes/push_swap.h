/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/21 14:39:55 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/25 18:45:23 by mde-rove      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int		size;
}	t_stack;

/* Swap operations */
void		sa(t_stack *a);
void		sb(t_stack *b);
void		ss(t_stack *a, t_stack *b);

/* Push operations */
void		pa(t_stack *a, t_stack *b);
void		pb(t_stack *a, t_stack *b);

/* Rotate operations */
void		ra(t_stack *a);
void		rb(t_stack *b);
void		rr(t_stack *a, t_stack *b);

/* Reverse rotate operations */
void		rra(t_stack *a);
void		rrb(t_stack *b);
void		rrr(t_stack *a, t_stack *b);
/* Parsing */
t_stack		*new_stack(void);
int			add_to_stack_bottom(t_stack *a, int number);
void		free_stack(t_stack *stack);
t_node		*new_node(int number);
long long	argument_checker(const char *nptr);
int			is_dupe(t_stack *a, int arg);

/* Sorting */
void		simple_sort(t_stack *a, t_stack *b);

#endif