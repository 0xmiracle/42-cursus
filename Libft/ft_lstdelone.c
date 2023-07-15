/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:14:50 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/14 18:34:28 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
	{
		return ;
	}
	del(lst->content);
	free(lst);
}

void	del(void *data)
{
	free(data);
}

// int main()
// {
//     t_list *Node1;
//     t_list *Node2;
//     t_list *Node3;
//     t_list *Node4;

//     Node1 = ft_lstnew(ft_strdup("1"));
//     Node2 = ft_lstnew("2");
//     Node3 = ft_lstnew("3");
//     Node4 = ft_lstnew("4");

//     Node1->next = Node2;
//     Node2->next = Node3;
//     Node3->next = Node4;

//     printf("%s\n", Node1->content);
//     ft_lstdelone(Node1, free);
//     printf("%s\n", Node1->content);
// }