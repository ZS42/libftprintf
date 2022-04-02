/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:55:07 by zsyyida           #+#    #+#             */
/*   Updated: 2022/04/02 13:26:39 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_0x(va_list ap, int d, int *len)
{
	int	a;

	a = va_arg(ap, unsigned int);
	if (a == 0)
		ft_print_char('0', len);
	else
	{
		if (d == 'X')
			ft_putstr("0X", len);
		else if (d == 'x')
			ft_putstr("0x", len);
		ft_print_hex(a, len, d);
	}
}

void	ft_print_positive(va_list ap, int c, int d, int *len)
{
	int	a;

	if (d == 'i' || d == 'd')
	{
		a = va_arg(ap, int);
		if (a < 0)
			ft_putnbr(a, len);
		if (a >= 0)
		{
			if (c == '+')
				ft_print_char('+', len);
			else if (c == ' ' && (d == 'i' || d == 'd'))
				ft_print_char(' ', len);
			ft_putnbr(a, len);
		}
	}
	else if (d == 's' && !(c >= '0' && c <= '9'))
	{
		ft_putstr(va_arg(ap, char *), len);
	}
	else
		ft_print_char(' ', len);
}

void	ft_justifyleft_padzero(va_list ap, int c, int d, int *len)
{
	char	*x;
	int		z;

	x = (va_arg(ap, char *));
	z = ft_strlen(x);
	if (c == '-')
	{
		d = z;
		ft_putstr(x, len);
	}
	if (c == '0' && d > z)
	{
		while ((d - z) > 0)
		{
			ft_print_char('0', len);
			d--;
		}
		ft_putstr(x, len);
	}
}
