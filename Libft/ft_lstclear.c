/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:30:40 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/14 18:58:25 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

void	del(void *data)
{
	free(data);
}

// int	main(void)
// {
// 	t_list *Node1;
// 	t_list *Node2;
// 	t_list *Node3;
// 	t_list *Node4;

// 	Node1 = ft_lstnew(ft_strdup("1"));
// 	Node2 = ft_lstnew("2");
// 	Node3 = ft_lstnew("3");
// 	Node4 = ft_lstnew("4");

// 	Node1->next = Node2;
// 	Node2->next = Node3;
// 	Node3->next = Node4;

// 	printf("%s\n", Node1->content);
// 	ft_lstdelone(Node1, free);
// 	printf("%s\n", Node1->content);
// }