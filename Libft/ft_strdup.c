/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/15 11:33:05 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/15 11:39:33 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	n;

	n = ft_strlen(s) + 1;
	ptr = malloc(n);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, n);
	return (ptr);
}
