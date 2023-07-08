/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:37:00 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/08 19:18:16 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (p1[i] == p2[i] && i < n -1)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (p1[i] - p2[i]);
}

// int	main(void)
// {
// 	// char c[] = "123456789";
// 	// char a[] = "123459876";
// 	// printf("%d\n", ft_memcmp(c, a, 5));
// 	// printf("%d\n", memcmp(c, a, 5));
// 	printf("%d\n",(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0)));;
// 	printf("%d\n",(memcmp("zyxbcdefgh", "abcdefgxyz", 0)));;
// }