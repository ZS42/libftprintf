/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:29:57 by zsyyida           #+#    #+#             */
/*   Updated: 2022/04/02 13:27:29 by zsyyida          ###   ########.fr       */
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
int		ft_strlen(char *s);
void	ft_putstr(char *s, int *len);
void	ft_print_ptr(unsigned long long n, int *len);
void	ft_print_ptrhex(unsigned long long n, int *len);
void	ft_putnbr(int n, int *len);
void	ft_print_u(unsigned int n, int *len);
void	ft_print_hex(unsigned int n, int *len, char c);
void	ft_parse_bonus(char c, va_list ap, char d, int *len);
void	ft_justifyleft_padzero(va_list ap, int c, int d, int *len);
void	ft_print_0x(va_list ap, int c, int *len);
void	ft_print_positive(va_list ap, int c, int d, int *len);

#endif
