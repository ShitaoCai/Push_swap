/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/08 13:39:21 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/23 13:12:47 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_bytes(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dest;

	ptr_src = src;
	ptr_dest = dest;
	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	if (ptr_dest < ptr_src)
		copy_bytes(ptr_dest, ptr_src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptr_dest[i] = ptr_src[i];
		}
	}
	return (dest);
}
