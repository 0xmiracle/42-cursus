/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:35:00 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/24 17:22:43 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_cpy(char *buff, char *str)
{
	char	*new_str;

	new_str = ft_strjoin(str, buff);
	if (str)
		free(str);
	return (new_str);
}

char	*ft_fltr(char *str)
{
	int		i;
	char	*tmp;
	int		j;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	tmp = (char *)malloc(sizeof(char) * (i + 2));
	j = 0;
	while (j < i)
	{
		tmp[j] = str[j];
		j++;
	}
	if (str[j] == '\n')
		tmp[j++] = '\n';
	tmp[j] = '\0';
	return (tmp);
}

char	*ft_rmv(char *str)
{
	int		i;
	char	*tmp;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	tmp = ft_strdup(&str[i]);
	free(str);
	return (tmp);
}

char	*ft_fun(char *buff, char **str)
{
	char	*tmp;

	tmp = NULL;
	free(buff);
	if (!*str)
	{
		free(*str);
		*str = NULL;
		return (NULL);
	}
	tmp = ft_fltr(*str);
	*str = ft_rmv(*str);
	return (tmp);
}

char	*get_next_line(int fd)
{
	int			i;
	static char	*str;
	char		*buff;
	char		*tmp;
	char		*tt;

	i = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	tt = rr(&str, fd, &buff, &tmp);
	if (!tt)
		return (NULL);
	else if (*tt != '\0')
		return (tmp);
	tmp = ft_fltr(str);
	str = ft_rmv(str);
	return (free(buff), tmp);
}
