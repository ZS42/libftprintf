/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:41:34 by zsyyida           #+#    #+#             */
/*   Updated: 2022/03/25 12:35:45 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(char c, int *len)
{
	write(1, &c, 1);
	*len = *len + 1;
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s, int *len)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		*len = *len + 6;
		return ;
	}
	while (i < ft_strlen(s))
	{
		ft_print_char(s[i], len);
		i++;
	}
	return ;
}

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (n < 0)
	{
		ft_print_char('-', len);
		ft_putnbr(-n, len);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
	else
		ft_print_char(n % 10 + '0', len);
	return ;
}
