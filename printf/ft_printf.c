/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:22:39 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/05 17:24:58 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list *args)
{
	int	i;

	i = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'p')
		return (to_hexconv_p(va_arg(*args, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_putnbr_u(va_arg(*args, unsigned int)));
	else if (c == 'x')
		return (to_hexconv(va_arg(*args, unsigned int)));
	else if (c == 'X')
		return (to_hexconv_u(va_arg(*args, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (i);
}

int	ft_printf(const char *c, ...)
{
	int		i;
	va_list	args;
	int		count;

	i = 0;
	count = 0;
	va_start(args, c);
	while (c[i] != '\0')
	{
		if (c[i] == '%')
		{
			i++;
			count += ft_check(c[i], &args);
		}
		else
			count += write(1, &c[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
