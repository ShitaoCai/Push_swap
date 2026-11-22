/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/06 16:41:19 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/12 14:28:34 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%i", ft_tolower('B'));
	return (0);
} */
