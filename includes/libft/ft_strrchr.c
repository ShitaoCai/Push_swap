/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/12 14:28:59 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/12 16:35:19 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		i--;
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
}

/* #include <stdio.h>
int	main()
{
	printf("%s", ft_strrchr("Hello", 'l'));
	return (0);
} */