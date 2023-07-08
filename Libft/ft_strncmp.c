/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ratwani <Ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:38:45 by Ratwani           #+#    #+#             */
/*   Updated: 2023/06/28 12:58:03 by Ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while ((a[i] || b[i]) && i < n)
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     char c[] = "Nasser";
//     char a[] = "Nasser";

//     printf("%d\n", ft_strncmp(c, a, 8));
//     printf("%d", strncmp(c, a, 8));
// }

// t_case strncmp_tests[] = {
// 	{"test", "test", 4, 4, 4},
// 	{"test", "tests", 4, 5, 6},
// 	{"tests", "test", 5, 4, 6},
// 	{"test", "teSt", 4, 4, 4},
// 	{"test", "", 4, 0, 4},
// 	{"", "test", 0, 4, 4},
// 	{"test\0abc", "test\0zyx", 8, 8, 8},
// 	{"123456789", "123457689", 9, 9, 5},
// 	{"12345", "12389", 5, 5, 4},
// 	{"zyx", "abc", 3, 3, 0},
// 	{"", "abc", 0, 3, 0},
// 	{"abc", "", 3, 0, 0},
// {"test\200", "test\0", 5, 5, 6},
// 	{NULL, "abc", 0, 3, 3, true},
// 	{"abc", NULL, 3, 0, 3, true},
// 	{"⾐⭊ⱙ","⾐⭊≴", 9, 9, 9}
// };