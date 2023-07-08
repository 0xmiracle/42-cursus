/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:38:14 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/08 16:35:13 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	else
	{
		while (dest[i] != '\0' && i < dstsize)
			i++;
		if (i == dstsize)
			return (i + ft_strlen(src));
		while (i + j < dstsize - 1 && src[j])
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (i + ft_strlen(src));
	}
}

// int	main(void)
// {
// 	char	*d = NULL;
// 	char	s[20]= "456";
// 	char	*a = NULL;
// 	char	b[20]= "456";
// 	printf("%lu\n", ft_strlcat(d, s, 1));
// 	printf("%s\n", d);

// 	printf("%lu\n", strlcat(a, b, 1));
// 	printf("%s\n", a);
// 	char dest[300];
// 	memset(dest, 'r', 15);
// 	printf("%zu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
// 	write(1, "\n", 1);
// 	write(1, dest, 15);
// }

// // t_case strlcat_tests[] = {
// // 	{"test", 20, 5},
// // 	{"", 20, 5},
// // 	{"test12345", 20, 15},
// // 	{"test12345", 0, 15},
// // 	{"test12345", 20, 10},
// // 	{"test12345", 10, 10},
// // 	{"test12345", 20, 19}
// // };