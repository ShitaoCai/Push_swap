/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/20 14:27:57 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/20 14:44:40 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	to_upper(unsigned int i, char *s)
{
	(void)	i;
	*s = ft_toupper(*s);
}

#include <stdio.h>

int	main(void)
{
	char	s[] = "hello world";
	printf("Before:%s\n", s);
	ft_striteri(s, to_upper);
	printf("After:%s\n", s);
	return (0);
} */