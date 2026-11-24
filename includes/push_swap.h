/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/21 14:39:55 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/24 18:41:51 by mde-rove      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

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
/* stack helpers */
t_stack		*new_stack(void);
/* node helpers */
t_node		*new_node(int number);
/* parsing helpers */
long long	argument_checker(const char *nptr);
int			is_dupe(t_stack *a, int arg);

#endif