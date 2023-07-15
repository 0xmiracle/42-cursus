/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:02:47 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/14 19:27:06 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	while (lst != NULL)
	{
		tmp = lst;
		f(lst->content);
		lst = lst->next;
	}
}

// static void	f(void *data)
// {
// 	free(data);
// }

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