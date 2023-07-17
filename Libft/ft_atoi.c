/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:35:50 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/16 11:29:35 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_coneverttonumber(const char *str, int i, int sign)
{
	long	result;
	long	tmp;

	result = 0;
	tmp = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = result;
		result = result * 10 + str[i] - '0';
		if (tmp > result)
		{
			if (sign < 0)
				return (0);
			else
				return (-1);
		}
		i++;
	}
	return (sign * result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
	{
		if (sign == -1)
			return (0);
		i++;
	}
	return (ft_coneverttonumber(str, i, sign));
}
