/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:00:06 by zsyyida           #+#    #+#             */
/*   Updated: 2022/04/02 14:04:03 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./ft_printf_utils1.c"
#include "./ft_printf_utils2.c"
#include "./ft_printf_utils3.c"
#include "./ft_printf_utils4.c"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] != '%')
			ft_print_char(format[i], &len);
		else if (format[i] == '%')
		{
			ft_parse_format(format[++i], ap, &len);
			while (format[i] == '#' || format[i] == '0' || format[i] == '-'
				|| format[i] == '+' || format[i] == ' ')
				i++;
			if (format[i] >= '0' && format[i] <= '9')
				i = i + 1;
			ft_parse_bonus(format[i - 1], ap, format[i], &len);
		}
		i++;
	}
	va_end(ap);
	return (len);
}

int	main(void)
{
	int a = ft_printf(" %01d ", 0);
	int	b = printf(" %01d ", 0);
	printf("%d,%d", a, b);
}
