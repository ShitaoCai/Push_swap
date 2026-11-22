/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-rove <mde-rove@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/22 14:31:36 by mde-rove      #+#    #+#                 */
/*   Updated: 2026/11/22 18:02:59 by mde-rove      ########   odam.nl         */
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


int	main(int argc, char **argv)
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
}
