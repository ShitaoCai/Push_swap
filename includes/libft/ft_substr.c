/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/15 12:36:00 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/18 14:26:40 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (start >= ft_strlen(s))
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, 1);
		return (ptr);
	}
	i = 0;
	while (i < len && s[start + i])
		i++;
	ptr = malloc(i + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s + start, i);
	ptr[i] = '\0';
	return (ptr);
}

/* #include <stdio.h>

int	main()
{
	char *p = "Hello world";

	printf("%s\n", ft_substr(p, 1, 15));
	return 0;
} */