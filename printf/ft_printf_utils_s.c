/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_s.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:45:24 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/04 19:00:48 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

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
	i = strlen(s);
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
	if (n < 0)
	{
		count += write(1, "-", 1);
		number = -number;
	}
	if (number > 9)
	{
		count += ft_putnbr_u(number / 10);
	}
	c = (number % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int	to_hexconv(unsigned int x)
{
	int		i;
	char	*c;
	int		j;
	char	temp[100];

	c = "0123456789abcdef";
	i = 0;
	while (x != 0)
	{
		temp[i] = c[x % 16];
		x = x / 16;
		i++;
	}
	temp[i] = '\0';
	j = i;
	while (i != 0)
	{
		write(1, &temp[i - 1], 1);
		i--;
	}
	return (j);
}

int	to_hexconv_u(unsigned int x)
{
	int		i;
	char	*c;
	int		j;
	char	temp[100];

	// printf("%d\n", x);
	c = "0123456789ABCDEF";
	i = 0;
	while (x != 0)
	{
		temp[i] = c[x % 16];
		x = x / 16;
		i++;
	}
	temp[i] = '\0';
	j = i;
	while (i != 0)
	{
		write(1, &temp[i - 1], 1);
		i--;
	}
	return (j);
}
