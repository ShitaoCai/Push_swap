/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/27 12:01:50 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/07 12:57:52 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf_utils(const char c, va_list args)
{
	if (c == 'c')
		return (print_char(args));
	if (c == 's')
		return (print_string(args));
	if (c == 'd' || c == 'i')
		return (print_number(args));
	if (c == 'u')
		return (print_unsigned(args));
	if (c == 'x' || c == 'X')
		return (print_hex(args, c));
	if (c == 'p')
		return (print_address(args));
	if (c == '%')
		return (print_percent());
	return (0);
}
