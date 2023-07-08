/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:36:19 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/04 13:30:16 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('A'));
// }