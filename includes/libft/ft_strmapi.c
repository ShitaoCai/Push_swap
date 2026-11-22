/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/20 13:29:04 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/20 13:50:47 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* #include <stdio.h>

char	to_upper(unsigned int i, char c)
{
	(void) i;
	c = ft_toupper(c);
	return (c);
}

int	main(void)
{
	const char	*s = "hello world";
	char	*ptr = ft_strmapi(s, to_upper);
	printf("Original:%s\nUpdated:%s\n", s, ptr);
	free(ptr);
	return (0);
}
 */