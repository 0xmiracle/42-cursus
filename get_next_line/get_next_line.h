/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:35:19 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/23 18:48:20 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int a);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_cpy(char *buff, char *str);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);





# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

#endif
