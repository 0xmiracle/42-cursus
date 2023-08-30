/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:37:43 by Ratwani           #+#    #+#             */
/*   Updated: 2023/08/29 13:56:54 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
	int i;

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

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (len == 0)
	{
		return (j);
	}
	else
	{
		while (i < len - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (j);
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
