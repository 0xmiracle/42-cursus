/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:50:25 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/14 18:20:44 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		curr = *lst;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new;
	}
}

// int main()
// {
//     t_list *Node1;
//     t_list *Node2;
//     t_list *Node3;
//     t_list *Node4;
//     t_list *Node5;
//     Node1 = ft_lstnew("1");
//     Node2 = ft_lstnew("2");
//     Node3 = ft_lstnew("3");
//     Node4 = ft_lstnew("4");
//     Node5 = ft_lstnew("5");
//     Node1->next = Node2;
//     Node2->next = Node3;
//     Node3->next = Node4;
//     // Node4->next = NULL;
//     ft_lstadd_back(&Node1, Node5);
//     printf("LAST NODE ADDR:  %p\n\n", ft_lstlast(Node1));
//     printf("%p\n", Node1);
//     printf("%p\n", Node2);
//     printf("%p\n", Node3);
//     printf("%p\n", Node4);
//     printf("%p\n", Node5);
// }