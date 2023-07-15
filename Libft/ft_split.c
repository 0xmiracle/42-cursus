/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:37:43 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/13 16:46:48 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nostrings(char *s, char c)
{
	int	i;
	int	j;
	int	started;

	started = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && started == 0)
		{
			started = 1;
			j = j + 1;
		}
		else if (s[i] == c)
		{
			started = 0;
		}
		i++;
	}
	return (j);
}

static void	ft_free(char **strings)

{
	int	i;

	i = 0;
	while (strings[i] != NULL)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

static int	ft_splitandcopy(char const *s, char c, char **str, int count)
{
	int	j;
	int	index;
	int	i;

	i = 0;
	index = 0;
	while (index < count)
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		if (j > 0)
		{
			str[index] = (char *)malloc(sizeof(char) * (j + 1));
			if (!str[index])
				return (-1);
			ft_strlcpy(str[index], &s[i], (j + 1));
			i = i + j;
		}
		index++;
	}
	str[count] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**strings;

	if (s == NULL)
	{
		return (NULL);
	}
	count = ft_nostrings((char *)s, c);
	strings = (char **)malloc(sizeof(char *) * (count + 1));
	if (!strings)
		return (NULL);
	if (ft_splitandcopy(s, c, strings, count) == -1)
	{
		ft_free(strings);
		return (NULL);
	}
	return (strings);
}

// int	main(void)
// {
// 	char *str = "^^^1^^2a,^^^^3^^^^--h^^^^";
// 	char c = '^';
// 	int i;
// 	i = 0;
// 	int j;
// 	j = ft_nostrings(str, c);
// 	char **strings;
// 	strings = ft_split(str, c);
// 	while (i < j)
// 	{
// 		printf("%s\n", strings[i]);
// 		i++;
// 	}
// }
