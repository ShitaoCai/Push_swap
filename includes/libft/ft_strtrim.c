/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/18 13:27:22 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/18 14:26:26 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = malloc(end - start + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1 + start, end - start);
	ptr[end - start] = '\0';
	return (ptr);
}

/* #include <stdio.h>

int	main()
{
	char	*s = "   hello world  ";
	char	*s1 = " ";
	char	*s2 = "hello world";

	printf("Original: %s\ntrimmed: %s\n", s, ft_strtrim(s, " hd"));
	printf("Original: %s\ntrimmed: %s\n", s1, ft_strtrim(s1, " hd"));
	printf("Original: %s\ntrimmed: %s\n", s2, ft_strtrim(s2, " hd"));
	return (0);
}
 */