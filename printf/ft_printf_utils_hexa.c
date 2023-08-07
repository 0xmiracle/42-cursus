/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_hexa.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:24:56 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/05 17:04:37 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	to_hexconv(unsigned int x)
{
	int		i;
	char	*c;
	int		j;
	char	temp[100];

	c = "0123456789abcdef";
	i = 0;
	if (x == 0)
		return (write(1, "0", 1));
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

	if (x == 0)
		return (write(1, "0", 1));
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

int	to_hexconv_p(unsigned long x)
{
	int		i;
	char	*c;
	int		j;
	char	temp[100];

	c = "0123456789abcdef";
	i = 0;
	if (x == 0)
		return (write(1, "0x0", 3));
	write(1, "0x", 2);
	while (x != 0)
	{
		temp[i] = c[x % 16];
		x = x / 16;
		i++;
	}
	temp[i] = '\0';
	j = i + 2;
	while (i != 0)
	{
		write(1, &temp[i - 1], 1);
		i--;
	}
	return (j);
}
