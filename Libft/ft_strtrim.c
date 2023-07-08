/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:39:13 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/05 13:16:48 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_tab(char const *set, int *tab)
{
	int	i;

	i = 0;
	while (i < 256)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	while (set[i] != '\0')
	{
		tab[(int)set[i]] = 1;
		i++;
	}
}

static char	*ft_createandcopy(char const *s1, int i, int j)
{
	int		k;
	char	*str;

	k = 0;
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!str)
	{
		return (NULL);
	}
	while (i <= j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	tab[256];

	if (!s1)
		return (NULL);
	ft_tab(set, tab);
	i = 0;
	j = ft_strlen((char *)s1) - 1;
	while (s1[i] && (tab[(int)s1[i]] == 1))
	{
		i++;
	}
	while (j > i && tab[(int)s1[j]] == 1)
	{
		j--;
	}
	return (ft_createandcopy(s1, i, j));
}

// int	main(void)
// {
// 	char *c = "         Al112111111i              ";
// 	char *a = " ";
// 	printf("%s", ft_strtrim(c, a));

// 	return (0);
// }