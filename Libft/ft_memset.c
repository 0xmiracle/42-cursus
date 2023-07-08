/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ratwani <Ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:37:17 by Ratwani           #+#    #+#             */
/*   Updated: 2023/06/25 18:21:33 by Ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char	*p;
	size_t	i;

	p = str;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

// int main()
// {
//     char str[10];

//     ft_memset(str, 97, 3 * sizeof(char));
//     printf("%s", str);
// }