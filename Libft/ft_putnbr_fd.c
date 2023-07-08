/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ratwani <Ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:37:32 by Ratwani           #+#    #+#             */
/*   Updated: 2023/06/25 18:21:45 by Ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;
	char	c;

	number = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	c = (number % 10) + '0';
	write(fd, &c, 1);
}

// int main()
// {
//     int i = -2147483648;
//     ft_putnbr_fd(i, 1);
// }
