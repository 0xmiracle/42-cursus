/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:36:44 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/04 12:27:22 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long number)
{
	int		len;
	long	temp;

	temp = number;
	len = 0;
	if (number == 0)
	{
		return (1);
	}
	if (number < 0)
	{
		len = 1;
		temp = -number;
	}
	while (temp != 0)
	{
		temp = temp / 10;
		len++;
	}
	return (len);
}

static char	*fillstring(long n, int len, char *str)
{
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_size((long)n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (fillstring((long)n, len, str));
}

// int	main(void)
// {
// 	unsigned int c;
// 	c = -2147483648LL;
// 	printf("%s\n", ft_itoa(c));
// 	// printf("%d", ft_size(c));
// }