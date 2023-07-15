/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:38:37 by Ratwani           #+#    #+#             */
/*   Updated: 2023/07/14 16:59:26 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
//     char *str = "Hii";
//     char *result_upper = ft_strmapi(str, uppercase_mapping);
//     char *result_lower = ft_strmapi(str, lowercase_mapping);

//     printf("Original string: %s\n", str);
//     printf("Uppercase mapping: %s\n", result_upper);
//     printf("Lowercase mapping: %s\n", result_lower);

//     free(result_upper);
//     free(result_lower);

//     return (0);
// }
