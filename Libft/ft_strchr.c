/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:37:54 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/08 16:57:29 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	int		i;
	char	c;

	i = 0;
	c = (char)(a % 256);
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&str[i]);
	}
	return (0);
}
// int main()
// {
//     char c[] = "teste";
//     int a = 1024;
//     printf("%s\n",ft_strchr(c, a));
//     char d[] = "teste";
//     int e = 1024;
//     printf("%s\n",strchr(c, a));
// }

// t_case strchr_tests[] = {
// 	{NULL, ' ', true},
// 	{"NULL", '\0'},
// 	{"abc", 'b'},
// 	{"abbc", 'b'},
// 	{"abc", 'd'},
// 	{"abc", 'a' + 256}