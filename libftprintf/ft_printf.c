/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:00:06 by zsyyida           #+#    #+#             */
/*   Updated: 2022/03/25 13:09:01 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;
	char	*t;

	len = 0;
	i = 0;
	t = (char *)format;
	va_start(ap, format);
	while (t[i])
	{
		if (t[i] != '%')
			ft_print_char(t[i], &len);
		else if (t[i] == '%')
			ft_parse_format(t[++i], ap, &len);
		i++;
	}
	va_end(ap);
	return (len);
}
