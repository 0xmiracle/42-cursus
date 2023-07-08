/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:37:12 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/08 16:34:45 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char *)dst;
	p2 = (char *)src;
	if (p1 < p2)
	{
		while (i < len)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	else if (p1 > p2)
	{
		i = len;
		while (i > 0)
		{
			p1[i - 1] = p2[i - 1];
			i--;
		}
	}
	return (dst);
}

// int	main(void)
// {
// char src[] = "Manchester";
// char dest[] = "1235675675675576555555";
// printf("%s\n", ft_memmove(dest, src,10));
// printf("%s\n", memmove(dest, src,3));
// memmove(dest + 1, dest, 2);

// printf("%s\n", dest);
// int a[] = {1,2,3,4,5};
// int i;
// i = 0;
// // char dest[20] = "abcde0123456789";
// ft_memmove(a + 2, a, 2);
// while (i < 5)
// {
// 	printf("%d\n", a[i]);
// 	i++;
//  }
// 	// write(1, "\n",1);
// 	// printf("%s\n", a);
// 	i = 0;
// 	memmove(a + 2, a,2);
// 	while (i < 5)
// 	{
// 		printf("%d\n", a[i]);
// 		i++;
// 	}
// 	// write(1, "\n",1);
// 	// printf("%s\n", dest);

// 	// char s[] = "abcde0123456789";
// 	// char d[20] = "abcde0123456789";
// 	// memmove(d + 2, d, 2);
// 	// memmove(d + 2, d, 2);
// 	// printf("%s\n", dest);

// 	// printf("%s\n", dest);
// }