/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/20 14:58:04 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/20 15:34:53 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	put_char(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		put_char('-', fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		put_char((nb % 10) + '0', fd);
	}
	else
		put_char(nb + '0', fd);
}

static void	put_char(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	ft_putnbr_fd(0, 1);
	return (0);
}
 */