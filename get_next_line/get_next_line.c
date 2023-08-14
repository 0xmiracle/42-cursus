/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:35:00 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/14 18:02:34 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_cpy(char *buff, char *str)
{
	int	j;

	j = 0;
	printf("In function: %s\n", buff);
	while (buff[j] && buff[j] != '\n')
	{
		j++;
	}
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (!str)
	{
		return (NULL);
	}
	j = 0;
	while (buff[j] != '\0')
	{
		str[j] = buff[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	int		i;
	char	buff[BUFFER_SIZE + 1];
	int		j;
	char	*str;

	str = NULL;
	i = 1;
	j = 0;
	while (i != 0 && ft_strchr(buff, '\n') != 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		buff[i] = '\0';
		printf("First read: %s\n", buff);
	}
	str = ft_cpy(buff, str);
	return (str);
}

int	main(void)
{
	int fd;
	fd = open("test.txt", O_RDONLY);
	printf("Last: %s", get_next_line(fd));
}