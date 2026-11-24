/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-rove <mde-rove@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 14:31:36 by mde-rove      #+#    #+#                 */
/*   Updated: 2026/11/24 18:50:19 by mde-rove      ########   odam.nl         */
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

int	main ()
{
	t_stack	*stack_a = new_stack();
	t_node	*node = new_node(5);

	stack_a -> top = node;
	stack_a -> bottom = node;
	stack_a -> size = 1;
	
	printf("\nis dupe? -=- %d\n", is_dupe(stack_a, 5));
	printf("\nis dupe? -=- %d\n", is_dupe(stack_a, 6));

	return (0);
}



/* int	main(int argc, char **argv)
{
	int	i;
	
	i = 1;
	while (i < argc)
		printf("\nargument: %s\n\n", argv[i++]);
	i = 1;
	while (i < argc)
		printf("\nargument in int: %lld\n\n", argument_checker(argv[i++]));
	i = 1;
	while (i < argc)
	{
		if (argument_checker(argv[i]) == LLONG_MIN)
			printf("\nError: invalid argument for %s.\n\n", argv[i]);
		i++;
	}
	printf("\nargc: %d\n", argc);
	return (0);
} */
