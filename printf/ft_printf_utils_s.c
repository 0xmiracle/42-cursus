/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_s.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:45:24 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/07 17:56:02 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = ft_strlen(s);
	write(1, s, i);
	return (i);
}

int	ft_putnbr(int n)
{
	long	number;
	int		count;
	char	c;

	count = 0;
	number = n;
	if (n < 0)
	{
		count += write(1, "-", 1);
		number = -number;
	}
	if (number > 9)
	{
		count += ft_putnbr(number / 10);
	}
	c = (number % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	unsigned int	number;
	unsigned int	count;
	char			c;

	count = 0;
	number = n;
	if (number > 9)
	{
		count += ft_putnbr_u(number / 10);
	}
	c = (number % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
