/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-rove <mde-rove@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 14:31:36 by mde-rove      #+#    #+#                 */
/*   Updated: 2026/11/25 17:30:06 by mde-rove      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

long long	argument_checker(const char *nptr)
{
	long long	conv;
	long long	minus;

	conv = 0;
	minus = 1;
	if (*nptr == '-')
		minus = -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	if (!(*nptr))
		return (LLONG_MIN);
	while ('0' <= *nptr && *nptr <= '9')
	{
		conv = conv * 10 + (*nptr - '0');
		if ((conv * minus) < INT_MIN || INT_MAX < (conv * minus))
			return (LLONG_MIN);
		nptr++;
	}
	if (*nptr)
		return (LLONG_MIN);
	return (conv * minus);
}

int	is_dupe(t_stack *a, int arg)
{
	t_node *check;

	check = a->top;
	while (check)
	{
		if (check->value == arg)
			return (1);
		check = check->next;
	}	
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	long long		llnumber;
	t_stack	*a;
	
	a = new_stack();
	if (a == NULL)
		return (1);
	
	i = 1;

	while (i < argc)
	{
		llnumber = argument_checker(argv[i]);
		if (llnumber == LLONG_MIN)
		{
			ft_printf("Error, invalid\n");
			free_stack(a);
			return (1);
		}
		if (is_dupe(a, llnumber) == 1)
		{
			ft_printf("Error, dupe\n");
			free_stack(a);
			return (1);
		}
		if (add_to_stack_bottom(a, llnumber) == 1)
		{
			ft_printf("Error, fail to add to stack\n");
			free_stack(a);
			return (1);
		}
		i++;
	}
		t_node	*check = a -> top;
		while (check)
		{
			printf(" %d", check -> value);
			check = check -> next;
		}
	free_stack(a);
	return (0);
}
