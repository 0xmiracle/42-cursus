/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:36:04 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/04 15:32:59 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*str;

	if (size != 0 && count != 0 && count >= UINT_MAX / size)
		return (NULL);
	i = 0;
	str = (char *)malloc(count * size);
	if (!str)
		return (NULL);
	while (i < count * size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char *result;
// 	result = ft_calloc(2147483647, 2147483647);
// 	printf("%s", result);
// }