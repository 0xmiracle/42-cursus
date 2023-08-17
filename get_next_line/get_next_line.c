/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:35:00 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/17 19:31:17 by ratwani          ###   ########.fr       */
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

	j = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	while (str[j] != '\n' && str[j] != '\0')
	{
		tmp[j] = str[j];
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}

char	*ft_rmv(char *str)
{
	int		i;
	char	*tmp;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	i++;
	while (str[j] != '\0')
		j++;
	tmp = (char *)malloc(sizeof(char) * (j - i + 1));
	j = 0;
	while (str[i] != '\0')
	{
		tmp[j] = str[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	free(str);
	str = tmp;
	return (str);
}

char	*get_next_line(int fd)
{
	int			i;
	static char	*str = NULL;
	char		*buff;
	int			j;
	char		*tmp;

	i = 1;
	j = 0;
	if (!str)
		str = ft_strdup("");
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (i > 0 && !ft_strchr(str, '\n'))
	{
		i = read(fd, buff, BUFFER_SIZE);
		buff[i] = '\0';
		str = ft_cpy(buff, str);
	}
	if (i == 0)
	{
		free(str);
		free(buff);
		return (NULL);
	}
	tmp = ft_fltr(str);
	str = ft_rmv(str);
	return (tmp);
}

// int	main(void)
// {
// 	int fd;
// 	char *c;
// 	fd = open("test.txt", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		perror("Error opening the file");
// 		return (1);
// 	}
// 	while ((c = get_next_line(fd)) != NULL)
// 	{
// 		printf("last: %s\n", c);
// 	}
// }