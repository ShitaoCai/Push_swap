/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hex.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/05 12:01:24 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/07 13:16:04 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	put_hex(unsigned long l, char *index);

int	print_hex(va_list args, char c)
{
	char			*index;
	unsigned int	u;

	u = va_arg(args, unsigned int);
	index = "0123456789abcdef";
	if (c == 'X')
		index = "0123456789ABCDEF";
	return (put_hex(u, index));
}

int	print_address(va_list args)
{
	void	*p;

	p = va_arg(args, void *);
	if (!p)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	return (put_hex((unsigned long)p, "0123456789abcdef") + 2);
}

int	put_hex(unsigned long l, char *index)
{
	int		count;

	count = 1;
	if (l > 15)
	{
		count += put_hex(l / 16, index);
	}
	ft_putchar_fd(index[l % 16], 1);
	return (count);
}
