/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:22:44 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/10 14:11:17 by ratwani          ###   ########.fr       */
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
// 	int age_1 = 23;
// 	t_list *age = ft_lstnew(&age_1);
// 	// t_list **current = &age;
// 	char name[] = "Rami";
// 	t_list *name_node = ft_lstnew(name);
// 	age->next = name_node;
// 	printf("%s", (char*)name_node->content);
// 	//     printf("%d",*(int*) age->content);
// 	// while (current != NULL)
// 	// {
// 	// 	printf("")
// 	// }
// // 	ft_lstadd_front(current, name_node);
// }