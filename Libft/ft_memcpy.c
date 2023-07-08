/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:37:07 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/06 12:11:57 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*p;
	char	*s;

	if (!dest && !src)
		return (NULL);
	i = 0;
	p = dest;
	s = (char *)src;
	while (i < len)
	{
		p[i] = s[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// char dest[4];
// char src[50] = "Hello";
// ft_memcpy(dest, src, 3);
// printf("%s\n", dest);

// char d[50] = '';
// int s[50] = '1';
// memcpy(&d, &s, 10);
// printf("%s", d);
// }