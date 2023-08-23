/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:35:00 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/23 19:57:17 by ratwani          ###   ########.fr       */
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

char	*get_next_line(int fd)
{
	int			i;
	static char	*str;
	char		*buff;
	int			j;
	char		*tmp;

	i = 1;
	j = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	while (i > 0 && !ft_strchr(str, '\n'))
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i == -1)
		{
			free(str);
			str = NULL;
			free(buff);
			return (NULL);
		}
		buff[i] = '\0';
		str = ft_cpy(buff, str);
	}
	if (i == 0)
	{
		free(buff);
		if (*str == '\0')
		{
			free(str);
			str = NULL;
			return (NULL);
		}
		tmp = ft_fltr(str);
		str = ft_rmv(str);
		return (tmp);
	}
	tmp = ft_fltr(str);
	str = ft_rmv(str);
	free(buff);
	return (tmp);
}

// int	main(void)
// {
// 	int fd;
// 	char *c;
// 	fd = open("test.txt", O_RDONLY);
// 	if (fd == 0)
// 	{
// 		perror("Error opening the file");
// 		return (1);
// 	}
// 	c = get_next_line(fd);
// 	while (c != NULL)
// 	{
// 		printf("last: %s", c);
// 		free(c);
// 		c = get_next_line(fd);
// 	}
// 	free(c);
// 	close(fd);
// }