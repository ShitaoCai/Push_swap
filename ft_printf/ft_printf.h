/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/27 10:56:49 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/24 16:38:28 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_printf_utils(const char c, va_list args);
int	print_char(va_list args);
int	print_string(va_list args);
int	print_number(va_list args);
int	print_unsigned(va_list args);
int	print_hex(va_list args, char c);
int	print_address(va_list args);
int	print_percent(void);
#endif
