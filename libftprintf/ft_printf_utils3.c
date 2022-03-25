/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:59:50 by zsyyida           #+#    #+#             */
/*   Updated: 2022/03/25 13:10:08 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_u(unsigned int n, int *len)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
	else
		ft_print_char(n + '0', len);
	return ;
}

void	ft_print_hex(unsigned int n, int *len, char c)
{
	char	*hex;

	if (c == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (n >= 16)
		ft_print_hex (n / 16, len, c);
	ft_print_char (hex[n % 16], len);
}

void	ft_print_ptr(unsigned long long n, int *len)
{
	ft_print_char('0', len);
	ft_print_char('x', len);
	ft_print_ptrhex(n, len);
}

void	ft_print_ptrhex(unsigned long long n, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_print_ptrhex(n / 16, len);
	ft_print_char(hex[n % 16], len);
}
