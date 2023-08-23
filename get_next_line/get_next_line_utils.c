/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:46:37 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/23 21:53:34 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int a)
{
	int		i;
	char	c;

	i = 0;
	c = (char)(a % 256);
	if (str == NULL)
		return (NULL);
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	k = i + j + 1;
	str = (char *)malloc(sizeof(char) * k);
	if (!str)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i] != '\0')
		str[i] = s1[i];
	while (s2[++j] != '\0')
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}

char	*rr(char **str, int fd, char **buff, char **tmp)
{
	int	i;

	i = 1;
	while (i > 0 && !ft_strchr(*str, '\n'))
	{
		i = read(fd, *buff, BUFFER_SIZE);
		if (i == -1)
		{
			free(*str);
			*str = NULL;
			return (free(*buff), NULL);
		}
		if (i == 0)
		{
			*tmp = ft_fun(*buff, str);
			return (*tmp);
		}
		(*buff)[i] = '\0';
		*str = ft_cpy(*buff, *str);
	}
	return ("");
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
