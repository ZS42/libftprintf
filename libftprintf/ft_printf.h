/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:29:57 by zsyyida           #+#    #+#             */
/*   Updated: 2022/03/25 12:45:00 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdio.h>
# include	<stdarg.h>
# include	<unistd.h>

int		ft_printf(const char *format, ...);
void	ft_parse_format(char c, va_list ap, int *len);
void	ft_print_char(char c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_print_ptr(unsigned long long n, int *len);
void	ft_print_ptrhex(unsigned long long n, int *len);
void	ft_putnbr(int n, int *len);
void	ft_print_u(unsigned int n, int *len);
void	ft_print_hex(unsigned int n, int *len, char c);

#endif
