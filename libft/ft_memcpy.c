/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/06 16:51:44 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/23 13:16:03 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dest;

	if (n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	ptr_src = src;
	ptr_dest = dest;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
