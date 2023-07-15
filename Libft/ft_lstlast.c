/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:14:19 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/14 14:10:08 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr;

	if (lst == NULL)
		return (NULL);
	curr = lst;
	while (curr->next)
	{
		curr = curr->next;
	}
	return (curr);
}

// int main()
// {
//     t_list *Node1;
//     t_list *Node2;
//     t_list *Node3;
//     t_list *Node4;
//     Node1 = ft_lstnew("1");
//     Node2 = ft_lstnew("2");
//     Node3 = ft_lstnew("3");
//     Node4 = ft_lstnew("4");
//     Node1->next = Node2;
//     Node2->next = Node3;
//     Node3->next = Node4;
//     Node4->next = NULL;
//     printf("%p\n", ft_lstlast(Node1));
// 	printf("%p\n", Node4);
// }
