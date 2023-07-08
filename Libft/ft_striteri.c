/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:44:34 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/06 12:22:35 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void	f(unsigned int i, char *c)
// {
// 	*c = ft_toupper(*c);
// }

// int	main(void)
// {
// 	char	str[4];

// 	str[4] = "aaa";
// 	ft_striteri(str, f);
// 	printf("%s\n", str);
// }
