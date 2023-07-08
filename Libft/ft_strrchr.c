/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ratwani <Ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:39:08 by Ratwani           #+#    #+#             */
/*   Updated: 2023/06/25 18:22:34 by Ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (char)a)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
// int main()
// {
//     char c[] = "abc";
//     int a = 'a'+ 256;
//     printf("%s\n",ft_strrchr(c, a));

// 	char b[] = "abc";
//     int d = 'a' + 256;
//     printf("%s\n",strrchr(b, d));
// }

// t_case strrchr_tests[] = {
// 	{NULL, 0, ' ', true},
// 	{"NULL", 4, '\0'},
// 	{"abc", 3, 'b'},
// 	{"abbbbbbbbc", 10, 'b'},
// 	{"abc", 3, 'd'},
// 	{"abc\0zyx", 7, 'z'},
// 	{"abc", 3, 'a' + 256}
// };
