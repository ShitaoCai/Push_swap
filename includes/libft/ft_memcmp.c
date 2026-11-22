/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/12 16:16:33 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/12 16:42:08 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;

	ptr_s1 = s1;
	ptr_s2 = s2;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			if ((ptr_s1[i] != ptr_s2[i]))
				return ((ptr_s1[i] - ptr_s2[i]));
			i++;
		}
	}
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_memcmp("abc", "abc", 3));
	printf("%d\n", ft_memcmp("abc", "abd", 3));
	printf("%d\n", ft_memcmp("abd", "abc", 3));
	printf("%d\n", ft_memcmp("abc", "xyz", 0));

	unsigned char	s1[] = {'A', '\0', 'B'};
	unsigned char	s2[] = {'A', '\0', 'C'};

	printf("%d\n", ft_memcmp(s1, s2, 3));
	return (0);
} */
