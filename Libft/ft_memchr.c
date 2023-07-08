/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:36:52 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/06 12:16:43 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char c[] = "bonjour";
//     int a = 'j';
//     printf("%p\n",ft_memchr(c, a, 7));
//     printf("%p",memchr(c, a, 7));
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

// 	printf("%s\n", (char *)memchr(tab, -1, 7));
// 	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
// }