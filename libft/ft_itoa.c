/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/18 17:19:20 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/20 13:28:27 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(int n);

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;
	long	nb;

	len = ft_count(n);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	nb = n;
	if (nb < 0)
		nb = -nb;
	while (len > 0)
	{
		ptr[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}

static size_t	ft_count(int n)
{
	if (n < 0)
	{
		if (n < -9)
			return (ft_count(-(n / 10)) + 2);
		else
			return (2);
	}
	if (n > 9)
		return (ft_count((n / 10)) + 1);
	else
		return (1);
}

/* #include <stdio.h>
int	main(void)
{
	int	n = -2147483647;
	printf("integer: %d\n string: %s\n", n, ft_itoa(n));
}
 */