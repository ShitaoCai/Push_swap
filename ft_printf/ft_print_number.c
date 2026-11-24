/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_number.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/05 11:43:13 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/07 13:00:26 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int		count_number(long n);
int		count_unsigned(unsigned int n);
void	put_unsigned(unsigned int u);

int	print_number(va_list args)
{
	int	i;

	i = va_arg(args, int);
	ft_putnbr_fd(i, 1);
	return (count_number(i));
}

int	print_unsigned(va_list args)
{
	unsigned int	u;

	u = va_arg(args, unsigned int);
	put_unsigned(u);
	return (count_unsigned(u));
}

int	count_number(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	count_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

void	put_unsigned(unsigned int u)
{
	if (u == 0)
		ft_putnbr_fd(0, 1);
	else if (u > 9)
	{
		put_unsigned(u / 10);
		ft_putnbr_fd((u % 10), 1);
	}
	else
		ft_putnbr_fd(u, 1);
}
