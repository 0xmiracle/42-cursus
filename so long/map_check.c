/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:44:07 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/29 14:30:13 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// char	*ft_mapcheck(int fd)
// {
// 	int		i;
// 	char	*first;
// 	char	*last;
// 	char	*tmp;
// 	char	*line;

// 	i = 0;
// 	last = NULL;
// 	first = get_next_line(fd);
// 	printf("c: %s", first);
// 	while ((line = get_next_line(fd)))
// 	{
// 		if (last)
// 		{
// 			free(last);
// 			last = NULL;
// 		}
// 		last = line;
// 	}
// 	printf("Last: %s", last);
// 	return (last);
// }

void	ft_mapcheck(int fd)
{
	int		i;
	char	*str;
	char	buff;
	int		j;
	char	**map;

	i = 1;
	j = 0;
	while ((i = read(fd, &buff, 1)) > 0)
		j++;
	str = malloc(sizeof(char) * (j + 1));
	str[j] = '\0';
	i = 1;
	j = 0;
	close(fd);
	fd = open("map.ber", O_RDONLY);
	while (i > 0)
	{
		i = read(fd, &str[j], 1);
		j++;
	}
	map = ft_split(str, '\n');
	// printf("%s", map);
	i = 0;
	while (map[i] != NULL)
	{
		printf("%s\n", map[i]);
		i++;
	}
	printf("i: %d", i);
}
int	main(void)
{
	int fd;
	fd = open("map.ber", O_RDONLY);
	if (fd == -1)
	{
		return (1);
	}
	ft_mapcheck(fd);
	close(fd);
}