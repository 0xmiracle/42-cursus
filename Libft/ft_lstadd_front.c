/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:22:44 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/07 17:50:59 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	int a;
// 	a = 5;
// 	t_list *age = ft_lstnew(&a);
// 	char name[] = "Rami";
// 	t_list name_node = *ft_lstnew(&name);
// 	ft_lstadd_front(&age, &name_node);
//     printf("%s", age->content);
// }