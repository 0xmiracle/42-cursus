/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:35:19 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/29 13:58:05 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./get_next_line/get_next_line.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_mapcheck(int fd);
char				**ft_split(char const *s, char c);
size_t				ft_strlcpy(char *dest, const char *src, size_t len);
size_t				ft_strlen(const char *str);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

#endif
