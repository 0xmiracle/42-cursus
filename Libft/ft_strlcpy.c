/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:38:25 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/08 15:52:34 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (len == 0)
	{
		return (j);
	}
	else
	{
		while (i < len - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (j);
}
// int	main(void)
// {
// 	char d[20] = "aaaaaaaaaa";
// 	char s[] = "abcdefghijk0123456789";
// 	// strlcpy(d, s, 3);
// 	printf("%lu\n", strlcpy(d, s, 0));
// 	printf("%s\n", d);

// 	char a[20] = "aaaaaaaaaa";
// 	char b[] = "abcdefghijk0123456789";
// 	// strlcpy(d, s, 3);
// 	printf("%lu\n", ft_strlcpy(a, b, 0));
// 	printf("%s", a);
// }

// t_case strlcpy_tests[] = {
// 	{"test", 20},
// 	{"", 20},
// 	{"1234567890", 5},
// 	{"abcdefghijk0123456789", 20},
// 	{"abcdefghijk0123456789", 0}
// };